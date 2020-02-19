#pragma once

#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class CircularLinkedList
{
public:
	ListNode* head;
	CircularLinkedList(int[],int);
	bool hasCycle(ListNode* head);
};
