#pragma once

#include <iostream>
using namespace std;

typedef int type;

struct ListNode {
	type val;
	ListNode* next;
	ListNode(type x) : val(x), next(NULL) {}
};

struct DoublyListNode
{
	type val;
	DoublyListNode* prev, * next;
	DoublyListNode(type x) :val(x), next(NULL), prev(NULL) {}
};

class DesignLinkedList
{
public:
	DesignLinkedList();
	int get(int);
	void addAtHead(int);
	void addAtTail(int);
	void addAtIndex(int, int);
	void deleteAtIndex(int);

	void PrintList();
	void PrintList(ListNode*);

	ListNode* head;
private:
	int ListSize;
	ListNode* tail;
};

class DesignDoublyLinkedList
{
public:
	DesignDoublyLinkedList();
	int get(int);
	void addAtHead(int);
	void addAtTail(int);
	void addAtIndex(int, int);
	void deleteAtIndex(int);
	void PrintList();
	void PrintList(DoublyListNode*);

	DoublyListNode* head;
	int listSize;
};

class LinkedListCycle
{
public:
	bool hasCycle(ListNode*);
};

class LinkedListCycle¢ò
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

class ReverseLinkedList
{
public:
	ListNode* reverseList(ListNode*);
};

class RemoveLinkedListElements
{
public:
	ListNode* removeElements(ListNode*, int);
};

class OddEvenLinkedList
{
public:
	ListNode* oddEvenList(ListNode*);
};

class PalindromeLinkedList
{
public:
	ListNode* reverselist(ListNode*);
	bool isPalindrome(ListNode*);
};