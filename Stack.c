#define InitCapacity 10
#include "Stack.h"


void StackInit(Stack* ps) {
	assert(ps);
	ps->_a = (STDataType*)malloc(sizeof(STDataType));
	ps->_top = 0;
	ps->_capacity = InitCapacity;
}

void StackDestory(Stack* ps) {
	assert(ps);
	
	free(ps->_a);
	ps->_a = NULL;
	ps->_top = 0;
	ps->_capacity = 0;
}

void CheckCapacity(Stack* ps) {
	//Õ»ÂúÁË£¬ÔöÈÝ
	if (ps->_top == ps->_capacity) {
		STDataType* tmp = (STDataType*)realloc(tmp, sizeof(STDataType));
		tmp->
	}
}

void StackPush(Stack* ps, STDataType x);
void StackPop(Stack* ps); STDataType StackTop(Stack* ps);
int StackEmpty(Stack* ps);
int StackSize(Stack* ps);

void TestStack();