#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#ifdef cplusplus
extern "C"{
#endif

//void PrintInt(int x);
void* NumberBlocks(void* listObject, char* currentNumberOfBlock);
void* AddLabelToListBlock(void* listObject, char* label);
void* CreateListForString(void* blockStr);
void* ConcatCppString(void* arg1, void* arg2);
void PrintCppString(void* str);
void* TranslateWordWithNumber(int address, const char* sign, char* number);
void* TranslateWordWithVariable(int address, char* variable);
void* TraslateExpressionBlock(char* variableNC,	void* expression);
void* ExecuteNegativeOperation(void* expression);
void* ExecuteArithmeticOperation(void* leftExpression, char sign, void* rightExpression);
void* PutExpressionInBrackets(void* expression);
void* ConvertCharToCppString(char* tokenNum);
void* TranslateFunction(int function, void* expression);
void* TranslateFunctionWithTwoArguments(int function, void* firstExpression, void* secondExpression);

#ifdef cplusplus
}
#endif
#endif