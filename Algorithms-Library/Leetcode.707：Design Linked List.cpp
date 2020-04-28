#include "LinkList.h"

MyLinkedList::MyLinkedList() :head(NULL), tail(NULL), ListSize(0) {}

int MyLinkedList::get(int index)
{
	if (index < 0 || index >= ListSize) return -1;
	ListNode* current = head;
	for (int i = 1; i < index + 1; ++i) current = current->next;
	if (current == NULL) return NULL;
	return current->val;
}

void MyLinkedList::addAtHead(int val)
{
	ListNode* ptr = head;
	ListNode* curPtr = new ListNode(val);
	curPtr->next = ptr;
	head = curPtr;

	if (tail == NULL)
		tail = curPtr;

	ListSize++;
}

void MyLinkedList::addAtTail(int val)
{
	if (tail == NULL)
	{
		head = new ListNode(val);
		tail = head;
	}
	else
	{
		tail->next = new ListNode(val);
		tail = tail->next;
	}

	ListSize++;
}

void MyLinkedList::addAtIndex(int index, int val)
{
	if (index == 0)addAtHead(val);
	else if (index == ListSize)addAtTail(val);
	else if (index > 0 && index < ListSize)
	{
		ListNode* ptr = head;
		while (--index)
		{
			if (ptr == NULL) return;
			ptr = ptr->next;
		}

		ListNode* inserter = new ListNode(val);
		if (ptr != NULL)
		{
			inserter->next = ptr->next;
			ptr->next = inserter;
		}
		else
			ptr = inserter;

		ListSize++;
	}
}

void MyLinkedList::deleteAtIndex(int index)
{
	if (index == 0)
	{
		ListNode* ptr = head;
		head = head->next;
		delete ptr;
		ListSize--;
	}
	else if (index > 0 && index < ListSize)
	{
		ListNode* pre = head;
		for (int i = 1; i < index; i++)
		{
			if (pre == NULL) break;;
			pre = pre->next;
		}

		if (pre != NULL)
		{
			ListNode* del = pre->next;
			if (del != NULL)
			{
				pre->next = del->next;
				delete del;
			}

			if (index == ListSize - 1)
				tail = pre;

			ListSize--;
		}

	}
}

void MyLinkedList::PrintList()
{
	ListNode* p = head;

	while (p != NULL)
	{
		cout << p->val << "\t";
		p = p->next;
	}

	cout << "输出结束" << endl;
}
void MyLinkedList::PrintList(ListNode* a)
{
	ListNode* p = a;

	while (p != NULL)
	{
		cout << p->val << "\t";
		p = p->next;
	}

	cout << "输出结束" << endl;
}