#pragma once

#include <iostream>

using namespace std;

//结点的数据类型
struct SingleListNode
{
	int data; //数据
	struct SingleListNode* next;  //下一个指针
	SingleListNode(int num) :data(num), next(NULL) {};
};

class SingleLinkedList
{
private:
	int ListSize;
	SingleListNode* head;
	SingleListNode* tail;
public:
	SingleLinkedList();  //初始化
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);

	void PrintList();
};

