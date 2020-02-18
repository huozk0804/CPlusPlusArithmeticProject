#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() :head(NULL), tail(NULL), ListSize(0) {}

int SingleLinkedList::get(int index)
{
	if (index < 0 || index >= ListSize) return -1;
	SingleListNode* current = head;
	for (int i = 0; i < index + 1; ++i) current = current->next;
	if (current != NULL) return -1;
	return current->data;
}

void SingleLinkedList::addAtHead(int val)
{
	SingleListNode* ptr = head;
	SingleListNode* curPtr = new SingleListNode(val);
	curPtr->next = ptr;
	head = curPtr;

	if (tail == NULL)
		tail = curPtr;

	ListSize++;
}

void SingleLinkedList::addAtTail(int val)
{
	if (tail == NULL)
	{
		head = new SingleListNode(val);
		tail = head;
	}
	else
	{
		tail->next = new SingleListNode(val);
		tail = tail->next;
	}

	ListSize++;
}

void SingleLinkedList::addAtIndex(int index, int val)
{
	if (index == 0)addAtHead(val);
	else if (index == ListSize)addAtTail(val);
	else if (index > 0 && index < ListSize)
	{
		SingleListNode* ptr = head;
		while (--index)
		{
			if (ptr == NULL) return;
			ptr = ptr->next;
		}

		SingleListNode* inserter = new SingleListNode(val);
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

void SingleLinkedList::deleteAtIndex(int index)
{
	if (index == 0)
	{
		SingleListNode* ptr = head;
		head = head->next;
		delete ptr;
		ListSize--;
	}
	else if (index > 0 && index < ListSize)
	{
		SingleListNode* pre = head;
		for (int i = 1; i < index; i++)
		{
			if (pre == NULL) break;;
			pre = pre->next;
		}

		if(pre!=NULL)
		{
			SingleListNode* del = pre->next;
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

void SingleLinkedList::PrintList()
{
	SingleListNode* p = head;

	while (p != NULL)
	{
		cout << p->data << "\t";
		p = p->next;
	}

	cout << "Êä³ö½áÊø" << endl;
}
