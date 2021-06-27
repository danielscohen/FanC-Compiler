#include "bp.hpp"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;
extern std::stack<std::pair<int, int>> funcParamLabelStack;

bool replace(string& str, const string& from, const string& to, const BranchLabelIndex index);

CodeBuffer::CodeBuffer() : buffer(), globalDefs() {}

CodeBuffer &CodeBuffer::instance() {
	static CodeBuffer inst;//only instance
	return inst;
}

string CodeBuffer::genLabel(){
	std::stringstream label;
	label << "label_";
	label << buffer.size();
	std::string ret(label.str());
	label << ":";
	emit(label.str());
	return ret;
}

string CodeBuffer::genReg(){
    static int regId = 0;
    std::stringstream reg;
    reg << "%reg";
    reg << regId++;
    std::string ret(reg.str());
    return ret;
}

int CodeBuffer::emit(const string &s){
    buffer.push_back(s);
	return buffer.size() - 1;
}

void CodeBuffer::bpatch(const vector<pair<int,BranchLabelIndex>>& address_list, const std::string &label){
    for(vector<pair<int,BranchLabelIndex>>::const_iterator i = address_list.begin(); i != address_list.end(); i++){
    	int address = (*i).first;
    	BranchLabelIndex labelIndex = (*i).second;
		replace(buffer[address], "@", "%" + label, labelIndex);
    }
}

void CodeBuffer::printCodeBuffer(){
	for (std::vector<string>::const_iterator it = buffer.begin(); it != buffer.end(); ++it) 
	{
		cout << *it << endl;
    }
}

vector<pair<int,BranchLabelIndex>> CodeBuffer::makelist(pair<int,BranchLabelIndex> item)
{
	vector<pair<int,BranchLabelIndex>> newList;
	newList.push_back(item);
	return newList;
}

vector<pair<int,BranchLabelIndex>> CodeBuffer::merge(const vector<pair<int,BranchLabelIndex>> &l1,const vector<pair<int,BranchLabelIndex>> &l2)
{
	vector<pair<int,BranchLabelIndex>> newList(l1.begin(),l1.end());
	newList.insert(newList.end(),l2.begin(),l2.end());
	return newList;
}

// ******** Methods to handle the global section ********** //
void CodeBuffer::emitGlobal(const std::string& dataLine)
{
	globalDefs.push_back(dataLine);
}

void CodeBuffer::printGlobalBuffer()
{
	for (vector<string>::const_iterator it = globalDefs.begin(); it != globalDefs.end(); ++it)
	{
		cout << *it << endl;
	}
}

void CodeBuffer::initVarStack() {
    emit("%lVars = alloca [50 x i32]");
}

std::string CodeBuffer::getVarAddr(int offset) {
    std::stringstream str;
    str << genReg();
    std::string ret(str.str());
    str << " = getelementptr [50 x i32], [50 x i32]* %lVars, i32 0, i32 ";
    str << offset;
    emit(str.str());
    return ret;
}

void CodeBuffer::setVar(int offset, string val) {
    std::stringstream str;
    str << "store i32 ";
    str << val;
    str << ", i32* ";
    str << getVarAddr(offset);
    emit(str.str());
}

std::string CodeBuffer::getVar(int offset) {
    std::stringstream str;
    if(offset < 0){
        str << "%";
        str << (-offset-1);
        std::string ret(str.str());
        return ret;
    }
    str << genReg();
    std::string ret(str.str());
    str << " = load i32, i32* ";
    str << getVarAddr(offset);
    emit(str.str());
    return ret;
}

std::string
CodeBuffer::doBinop(std::string lVal, std::string rVal, std::string lType, std::string rType, std::string op) {
    if(op == "sdiv"){
        std::stringstream str;
        str << genReg();
        std::string temp(str.str());
        str << " = icmp eq i32 0, ";
        str << rVal;
        emit(str.str());
        int addr = emit("br i1 " + temp + ", label @, label @");
        bpatch(makelist(std::pair<int, BranchLabelIndex>(addr, FIRST)), genLabel());
        std::string ptr(genReg());
        emit("%" + ptr + " = getelementptr [22 x i8], [22 x i8]* @divZeroText, i32 0, i32 0");
        emit("call void @print(i8* %" + ptr + ")");
        emit("call void @exit(i32 0)");
        emit("br label %NotDiv0");
        bpatch(makelist(std::pair<int, BranchLabelIndex>(addr, SECOND)), genLabel());
    }
    std::stringstream str;
    str << genReg();
    std::string ret(str.str());
    str << " = ";
    str << op;
    str << " i32 ";
    str << lVal;
    str << ", ";
    str << rVal;
    emit(str.str());
    if(lType == "BYTE" && rType == "BYTE"){
        str.str("");
        str << genReg();
        std::string temp(str.str());
        str << " = trunc i32 ";
        str << ret;
        str << " to i8";
        emit(str.str());

        str.str("");
        str << genReg();
        ret = str.str();
        str << " = zext i8 ";
        str << temp;
        str << " to i32";
        emit(str.str());
    }
    return ret;
}

void CodeBuffer::addBegCodetoBuffer() {
    emit("declare i32 @printf(i8*, ...)");
    emit("declare void @exit(i32)");
    emit("@.int_specifier = constant [4 x i8] c\"%d\\0A\\00\"");
    emit("@.str_specifier = constant [4 x i8] c\"%s\\0A\\00\"");
    emit("@divZeroText = constant [22 x i8] c\"Error division by zero\"");
    emit("define void @printi(i32) {");
    emit("%spec_ptr = getelementptr [4 x i8], [4 x i8]* @.int_specifier, i32 0, i32 0");
    emit("call i32 (i8*, ...) @printf(i8* %spec_ptr, i32 %0)");
    emit("ret void");
    emit("}");
    emit("define void @print(i8*) {");
    emit("%spec_ptr = getelementptr [4 x i8], [4 x i8]* @.str_specifier, i32 0, i32 0");
    emit("call i32 (i8*, ...) @printf(i8* %spec_ptr, i8* %0)");
    emit("ret void");
    emit("}");

}

std::vector<std::pair<int, BranchLabelIndex>> CodeBuffer::doList() {

    int addr = emit("br label @");
    return makelist(std::pair<int, BranchLabelIndex>(addr, FIRST));
}

int CodeBuffer::doRelop(std::string regL, std::string regR, std::string op) {
    std::stringstream str;
    std::string temp(genReg());
    str << temp + " = icmp ";
    str << op;
    str << " i32 ";
    str << regL;
    str << ", ";
    str << regR;
    emit(str.str());
    return emit("br i1 "+ temp + ", label @, label @");
}

std::vector<std::pair<int, BranchLabelIndex>>
CodeBuffer::doParam(std::string type, std::string val, std::vector<std::pair<int, BranchLabelIndex>> tList,
                    std::vector<std::pair<int, BranchLabelIndex>> fList, bool isLast) {
    if(type == "STRING"){
        std::string txtSize(std::to_string(val.size()));
        std::string str(genReg().erase(0, 1));
        emitGlobal("@" + str + " = constant [" + txtSize + " x i8] c" + val);
        std::string ptr(genPReg());
        emit(ptr + " = getelementptr [" + txtSize + " x i8], [" + txtSize + " x i8]* @" + str + ", i32 0, i32 0");
        int addr = 0;
        if(!isLast) {
            addr = emit("br label @");
        }
        return makelist(std::pair<int, BranchLabelIndex>(addr, FIRST));

    }
    if(type == "BOOL"){
        std::string tLabel(genLabel());
        bpatch(tList, tLabel);
        int tAddr = emit("br label @");
        std::string fLabel(genLabel());
        bpatch(fList, fLabel);
        int fAddr = emit("br label @");
        bpatch(merge(makelist(std::pair<int, BranchLabelIndex>(tAddr, FIRST)),
                     makelist(std::pair<int, BranchLabelIndex>(fAddr, FIRST))), genLabel());
        std::string temp(genPReg());
        emit(temp + " = phi i32 [1, %" + tLabel + "], [0, %" + fLabel + "]" );
        int addr = 0;
        if(!isLast){
            addr = emit("br label @");
        }
        return makelist(std::pair<int, BranchLabelIndex>(addr, FIRST));
    }
    std::string temp(genPReg());
    emit(temp + " = add i32 0, " + val);
    int addr = 0;
    if(!isLast) {
        addr = emit("br label @");
    }
    return makelist(std::pair<int, BranchLabelIndex>(addr, FIRST));
}

std::string CodeBuffer::genPReg() {
    std::stringstream reg;
    reg << "%preg_";
    reg << funcParamLabelStack.top().first;
    reg << "_";
    reg << funcParamLabelStack.top().second++;
    std::string ret(reg.str());
    return ret;
}

void CodeBuffer::doFuncCall(int size, std::string name, std::string rType) {
    int index1 = funcParamLabelStack.top().first;
    if(name == "print"){
        emit("call void @print(i8* %preg_" + std::to_string(index1) + "_1)");
        return;
    }
    std::stringstream str;
    str << std::string("call ") + (rType == "VOID" ? "void " : "i32 ") + "@" + name + "(";
    for(int i = 0; i < size; i++){
        str << "i32 %preg_";
        str << index1;
        str << "_";
        str << (i + 1);
        if(i != size - 1) str << ", ";
    }
    str << ")";
    emit(str.str());
}

// ******** Helper Methods ********** //
bool replace(string& str, const string& from, const string& to, const BranchLabelIndex index) {
	size_t pos;
	if (index == SECOND) {
		pos = str.find_last_of(from);
	}
	else { //FIRST
		pos = str.find_first_of(from);
	}
    if (pos == string::npos)
        return false;
    str.replace(pos, from.length(), to);
    return true;
}

