#include"LinkList.h"

DesignDoublyLinkedList::DesignDoublyLinkedList() :head(NULL), listSize(0) {}

int DesignDoublyLinkedList::get(int index)
{
	if (index < 0 || index >= listSize) return -1;
	DoublyListNode* current = head;
	for (int i = 1; i < index + 1; ++i) current = current->next;
	if (current == NULL) return NULL;
	return current->val;
}

void DesignDoublyLinkedList::addAtHead(int val)
{
	addAtIndex(0, val);
}

void DesignDoublyLinkedList::addAtTail(int val)
{
	addAtIndex(listSize, val);
}

void DesignDoublyLinkedList::addAtIndex(int index, int val)
{
	if (head == NULL)
	{
		head = new DoublyListNode(val);
		listSize++;
		return;
	}

	if (index >= 0 && index <= listSize)
	{
		DoublyListNode* inserter = new DoublyListNode(val);
		DoublyListNode* temp = head;
		listSize++;
		if (index == 0 && head != NULL)
		{
			inserter->next = head;
			head->prev = inserter;
			head = inserter;
			return;
		}

		while (temp != NULL && index > 1)
		{
			temp = temp->next;
			index--;
		}

		inserter->next = temp->next;
		inserter->prev = temp;
		temp->next = inserter;
	}
}

void DesignDoublyLinkedList::deleteAtIndex(int index)
{
	if (index == 0)
	{
		DoublyListNode* ptr = head;
		head = head->next;
		delete ptr;
		listSize--;
	}
	else if (index > 0 && index < listSize)
	{
		DoublyListNode* pre = head;
		for (int i = 1; i < index; i++)
		{
			if (pre == NULL) break;;
			pre = pre->next;
		}

		if (pre != NULL)
		{
			DoublyListNode* del = pre->next;
			if (del != NULL)
			{
				pre->next = del->next;
				del->next->prev = pre;
				delete del;
			}

			listSize--;
		}

	}
}

void DesignDoublyLinkedList::PrintList()
{
	DoublyListNode* p = head;

	while (p != NULL)
	{
		cout << p->val << "\t";
		p = p->next;
	}

	cout << "输出结束" << endl;
}
void DesignDoublyLinkedList::PrintList(DoublyListNode* a)
{
	DoublyListNode* p = a;

	while (p != NULL)
	{
		cout << p->val << "\t";
		p = p->next;
	}

	cout << "输出结束" << endl;
}