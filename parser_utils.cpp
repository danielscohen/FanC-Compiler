//
// Created by dcohe on 26/05/2021.
//

#include "parser_utils.h"
#include "hw3_output.hpp"
#include <iostream>
#include <algorithm>
#include <sstream>

std::vector<SymbolTable> symTableStack;
std::vector<int> offsetStack;

void enterScope(std::string scopeType) {
    symTableStack.push_back(SymbolTable(scopeType));
    if(offsetStack.empty()){
        offsetStack.push_back(0);
    }
    offsetStack.push_back(offsetStack.back());

}

void exitScope() {
//    symTableStack.back().printTable();
    symTableStack.pop_back();
    offsetStack.pop_back();
}

void addVarToSymTable(std::string type, std::string id, int val) {
    symTableStack.back().insert(id, type, val, offsetStack.back());
    offsetStack.back()++;
}

void printProductionRule(int a) {

}

bool symPrevDefined(std::string name) {
    for(SymbolTable& table : symTableStack){
        if(table.existsInTable(name)) return true;
    }
    return false;
}

void defMatchesUse(std::string name, std::string type) {
    for(SymbolTable& table : symTableStack){
        if(!table.existsInTable(name)) continue;
        if(table.isfunction(name)){
            output::errorUndef(yylineno, name);
            exit(0);
        }
        if(!table.varMatchesDefInTable(name, type)){
            output::errorMismatch(yylineno);
            exit(0);
        }
    }
    output::errorMismatch(yylineno);
    exit(0);
}

YYSTYPE funCall(std::string name, std::vector<std::string> pTypes) {
    std::reverse(pTypes.begin(), pTypes.end());
    for(SymbolTable& table : symTableStack){
        if(!table.existsInTable(name)) continue;
        if(!table.isfunction(name)){
            output::errorUndefFunc(yylineno, name);
            exit(0);
        }
        table.funMatchesDefInTable(name, pTypes);
        return new Exp(table.getRetTypeById(name));
    }
    output::errorUndefFunc(yylineno, name);
    exit(0);
}

void prevDefCheck(std::string name) {
    if(symPrevDefined(name)){
        output::errorDef(yylineno, name);
        exit(0);
    }


}

void
addFunDef(std::string retType, std::string name, std::vector<std::string> pNames, std::vector<std::string> pTypes) {
    std::reverse(pNames.begin(), pNames.end());
    std::reverse(pTypes.begin(), pTypes.end());
    symTableStack.back().insert(name, retType, pTypes, 0);
    enterScope("");
    for(int i = 0; i < (int)pNames.size(); i++){
        prevDefCheck(pNames[i]);
        symTableStack.back().insert(pNames[i], pTypes[i], 0, -i - 1);
    }


}

void
addFunDefPrint(std::string retType, std::string name, std::vector<std::string> pNames, std::vector<std::string> pTypes) {
    symTableStack.back().insert(name, retType, pTypes, 0);
}
void printpNames(std::string pNames) {
        std::cout << "1: " << pNames << std::endl;
//    for(std::string a : pNames){
//        std::cout << "1: " << a << std::endl;
//    }

}

void checkNot(YYSTYPE y) {
    if(y->type != "BOOL"){
        output::errorMismatch(yylineno);
        exit(0);
    }
}

Node *doBinop(Node *lhs, Node *rhs, std::string op) {
    std::string lType = lhs->type;
    std::string rType = rhs->type;

    if((rType != "INT" && rType != "BYTE") || (lType != "INT" && lType != "BYTE")){
        output::errorMismatch(yylineno);
        exit(0);
    }
    YYSTYPE ret = new Num(0);

    if(lType == "INT" || rType == "INT"){
        ret->type = "INT";
    } else {
        ret->type = "BYTE";
    }

    std::string lval = lhs->reg.empty() ? std::to_string(lhs->val) : lhs->reg;
    std::string rval = rhs->reg.empty() ? std::to_string(rhs->val) : rhs->reg;

    ret->reg = CodeBuffer::instance().doBinop(lval, rval, lType, rType, op);

    return ret;
}

void checkBool(Node *lhs, Node *rhs) {
    if(lhs->type != "BOOL" || rhs->type != "BOOL"){
        output::errorMismatch(yylineno);
        exit(0);
    }
}

void checkRelop(Node *lhs, Node *rhs) {
    if(( lhs->type != "INT" && lhs->type != "BYTE" ) || ( rhs->type != "INT" && rhs->type != "BYTE" )){
        output::errorMismatch(yylineno);
        exit(0);
    }
}

Node *getById(Node *id) {
    std::string name = id->name;
    for(SymbolTable& table : symTableStack){
        if(!table.existsInTable(name)) continue;
        if(table.isfunction(name)){
            output::errorUndef(yylineno, name);
            exit(0);
        }
        std::string reg = CodeBuffer::instance().getVar(table.getOffset(name));
        Node* ret = table.getById(name);
        ret->reg = reg;
        return ret;
    }
    output::errorUndef(yylineno, name);
    exit(0);
}

void checkTypeMatch(std::string type1, std::string type2) {
    if(type1 == type2 || (type1 == "INT" && type2 == "BYTE")) return;

    output::errorMismatch(yylineno);
    exit(0);
}

std::string getTypeById(std::string name) {
    for(SymbolTable& table : symTableStack){
        if(!table.existsInTable(name)) continue;
        if(table.isfunction(name)){
            output::errorUndef(yylineno, name);
            exit(0);
        }
        return table.getTypeById(name);
    }
    output::errorUndef(yylineno, name);
    exit(0);
}

void changeValOfVar(std::string name, int val) {
    for(SymbolTable& table : symTableStack){
        if(!table.existsInTable(name)) continue;
        table.setVal(name, val);
        return;
    }
    output::errorUndef(yylineno, name);
    exit(0);



}

void checkRetMatchesFunc(std::string type) {
    SymbolTable gTable = symTableStack[0];
    gTable.checkRetMatchesFunc(type);

}

void checkBreak() {
    std::vector<SymbolTable>::reverse_iterator table = symTableStack.rbegin();
    while(table != symTableStack.rend()){
        if(table->getScopeType() == "WHILE" || table->getScopeType() == "SWITCH") return;
        table++;
    }

    output::errorUnexpectedBreak(yylineno);
    exit(0);
}

void checkContinue() {
    std::vector<SymbolTable>::reverse_iterator table = symTableStack.rbegin();
    while(table != symTableStack.rend()){
        if(table->getScopeType() == "WHILE") return;
        table++;
    }

    output::errorUnexpectedContinue(yylineno);
    exit(0);
}

void checkForMain() {
    symTableStack.back().checkForMain();
}

void checkByte(int val) {
    if(val > 255){
        output::errorByteTooLarge(yylineno, to_string(val));
        exit(0);
    }
}

void initVar(const string &name, string val) {
    int offset;
    for(SymbolTable& table : symTableStack){
        if(table.existsInTable(name)){
            offset = table.getOffset(name);
        }
    }
    CodeBuffer::instance().setVar(offset, val);
}

void initVarStack() {
    CodeBuffer::instance().initVarStack();
}

std::vector<std::pair<int, BranchLabelIndex>> doList() {
    return CodeBuffer::instance().doList();
}

int doRelop(std::string regL, std::string regR, std::string op) {
    return CodeBuffer::instance().doRelop(regL, regR, op);
}

std::string getpTypesStr(std::vector<std::string> pTypes) {
    std::stringstream str;
    str << "(";
    for(int i =0; i < (int)pTypes.size(); i++){
        str << "i32";
        if(i != pTypes.size() - 1){
            str << ", ";
        }
    }
    str << ")";
    return  str.str();
}

std::vector<std::pair<int, BranchLabelIndex>>
doParam(std::string type, std::string val, std::vector<std::pair<int, BranchLabelIndex>> tList,
        std::vector<std::pair<int, BranchLabelIndex>> fList, bool isLast) {
    CodeBuffer::instance().doParam(type, val, tList, fList, isLast);
}

void doFuncCall(int size, std::string name) {
    std::string rType = symTableStack[0].getRetTypeById(name);
    CodeBuffer::instance().doFuncCall(size, name, rType);

}

std::string getExpVal(Node *exp) {
    return exp->reg.empty() ? std::to_string(exp->val) : exp->reg;
}

void dprint(std::string str) {
    std::cout << str << std::endl;

}






