#pragma once

#include <iostream>

using namespace std;

//������������
struct SingleListNode
{
	int data; //����
	struct SingleListNode* next;  //��һ��ָ��
	SingleListNode(int num) :data(num), next(NULL) {};
};

class SingleLinkedList
{
private:
	int ListSize;
	SingleListNode* head;
	SingleListNode* tail;
public:
	SingleLinkedList();  //��ʼ��
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);

	void PrintList();
};

