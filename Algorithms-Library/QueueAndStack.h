#pragma once

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

typedef int dataType;

//队列的实现
class Queue
{
public:
	Queue();
	bool enQueue(dataType);
	bool deQueue();
	dataType front();
	bool isEmpty();

private:
	vector<dataType> data;
	int start;
};

struct stackNode
{
	dataType value;
	stackNode* next;
};

//栈的实现
class Stack
{
public:
	Stack();
	Stack(dataType);
	void Push(dataType);
	dataType Pop();
	bool isEmpty();
	bool isFull();
private:
	stackNode* stack;
	int stackLength;
};

class DesignCircularQueue
{
public:
	DesignCircularQueue();
	bool EnQueue(dataType);
	bool DeQueue();
	dataType Front();
	dataType Rear();
	bool isEmpty();
	bool isFull();

private:
	dataType head, tail;
	vector<dataType> queue;
};

class OpenTheLock
{
public:
	int openLock(vector<string>&, string);
};

class PerfectSquares
{
public:
	int numSquares(int);
};
