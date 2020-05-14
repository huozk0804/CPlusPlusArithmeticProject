#include"QueueAndStack.h"

Stack::Stack() {
	this->stack = NULL;
	this->stackLength = -1;
}

Stack::Stack(dataType value) {
	this->stack->value = value;
	this->stack->next = NULL;
	this->stackLength = 1;
}

void Stack::Push(dataType value) {
	stackNode* top = new stackNode();
	top->value = value;
	top->next = this->stack;
	this->stack = top;
	this->stackLength++;
}

dataType Stack::Pop() {
	if (isEmpty())
		return -1;
	dataType value = this->stack->value;
	this->stack = this->stack->next;
	stackLength--;
	return value;
}

bool Stack::isEmpty() {
	return stackLength < 1 ? true : false;
}

