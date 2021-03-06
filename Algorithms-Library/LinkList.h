#pragma once

#include <iostream>
using namespace std;

typedef int dataType;

struct ListNode {
	dataType val;
	ListNode* next;
	ListNode(dataType x) : val(x), next(NULL) {}
};

struct DoublyListNode
{
	dataType val;
	DoublyListNode* prev, * next;
	DoublyListNode(dataType x) :val(x), next(NULL), prev(NULL) {}
};

struct Node
{
	dataType val;
	Node* prev;
	Node* next;
	Node* child;
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

class MergeTwoSortedLists
{
public:
	ListNode* mergeTwoLists(ListNode*, ListNode*);
};

class AddTwoNumbers
{
public:
	ListNode* addTwoNumbers(ListNode*, ListNode*);
};

class FlattenAMultilevelDoublyLinkedList
{
public:
	Node* flatten(Node*);
};
