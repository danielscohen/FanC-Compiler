//
// Created by dcohe on 26/05/2021.
//

#ifndef PROJECTNAME_PARSER_UTILS_H
#define PROJECTNAME_PARSER_UTILS_H

#include "yystype.h"
#include "symbol_table.h"
#include <vector>
#include <stack>
#include "parser.tab.hpp"
#include "bp.hpp"


extern std::vector<SymbolTable> symTableStack;
extern std::vector<int> offsetStack;
extern std::stack<std::pair<int, int>> funcParamLabelStack;
extern int yylineno;

bool symPrevDefined(std::string);
void defMatchesUse(std::string, std::string);
YYSTYPE funCall(std::string name, std::vector<std::string> pTypes);

void enterScope(std::string scopeType);
void exitScope();
void printProductionRule(int a);
void prevDefCheck(std::string name);
void addFunDef(std::string retType, std::string name, std::vector<std::string> pNames, std::vector<std::string> pTypes);
void addFunDefPrint(std::string retType, std::string name, std::vector<std::string> pNames, std::vector<std::string> pTypes);


void addVarToSymTable(std::string type, std::string id, int val);
void addFunToSymTable(std::string retType, std::string name, std::vector<std::string> pNames);
void checkNot(YYSTYPE y);
YYSTYPE doBinop(YYSTYPE lhs, YYSTYPE rhs, std::string op);
void checkBool(YYSTYPE lhs, YYSTYPE rhs);
void checkRelop(YYSTYPE lhs, YYSTYPE rhs);
YYSTYPE getById(YYSTYPE id);
void checkTypeMatch(std::string type1, std::string type2);

void printpNames(std::string pNames);
std::string getTypeById(std::string Id);
void changeValOfVar(std::string Id, int val);
void checkRetMatchesFunc(std::string type);
void checkBreak();
void checkContinue();
void checkForMain();
void checkByte(int val);
void initVar(const string &name, string val);
void initVarStack();
std::vector<std::pair<int, BranchLabelIndex>> doList();
int doRelop(std::string regL, std::string regR, std::string op);
std::string getpTypesStr(std::vector<std::string> pTypes);
std::vector<std::pair<int, BranchLabelIndex>>
doParam(std::string type, std::string val, std::vector<std::pair<int, BranchLabelIndex>> tList,
        std::vector<std::pair<int, BranchLabelIndex>> fList, bool isLast);
void doFuncCall(int size, std::string name);
std::string getExpVal(std::vector<std::pair<int, BranchLabelIndex>> tList, std::vector<std::pair<int, BranchLabelIndex>> fList,
        std::string name, std::string val, std::string type, std::string reg);
std::string getExpVal(YYSTYPE exp);
void dprint(std::string str);
void enterCallLabelScope();
void exitCallLabelScope();




#endif //PROJECTNAME_PARSER_UTILS_H
