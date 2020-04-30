#pragma once

#include<iostream>
#include<vector>
using namespace std;

typedef int type;

class MyQueue
{
public:
	MyQueue();
	bool enQueue(type);
	bool deQueue();
	type front();
	bool isEmpty();

private:
	vector<int> data;
	int start;
};

class DesignCircularQueue
{
public:
	DesignCircularQueue();
	bool EnQueue(type);
	bool DeQueue();
	type Front();
	type Rear();
	bool isEmpty();
	bool isFull();

private:
	type head, tail;
	vector<type> queue;
};
