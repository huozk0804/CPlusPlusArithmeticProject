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
	int get(int);
	void addAtHead(int);
	void addAtTail(int);
	void addAtIndex(int, int);
	void deleteAtIndex(int);

	void PrintList();

private:
	int ListSize;
	ListNode* head;
	ListNode* tail;
};

class LinkedListCycle
{
public:
	bool hasCycle(ListNode*);
};

class LinkedListCycle��
{
public:
	ListNode* detectCycle(ListNode*);
};

class IntersectionOfTwoLinkedLists
{
public:
	ListNode* getIntersectionNode(ListNode*, ListNode*);
};

class RemoveNthNodeFromEndOfList
{
public:
	ListNode* removeNthFromEnd(ListNode*, int);
};

