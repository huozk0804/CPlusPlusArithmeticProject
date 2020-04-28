#pragma once

#include <iostream>
using namespace std;

typedef int type;

struct ListNode {
	type val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class MyLinkedList
{
public:
	MyLinkedList();
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);

	void PrintList();

private:
	int ListSize;
	ListNode* head;
	ListNode* tail;
};
