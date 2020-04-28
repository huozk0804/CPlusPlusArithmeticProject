#include"LinkList.h"

ListNode* IntersectionOfTwoLinkedLists::getIntersectionNode(ListNode* headA, ListNode* headB) {
	ListNode* a=headA, * b=headB;
	int numA = 0, numB = 0, offset = 0;

	while (a!= NULL)
	{
		numA++;
		a = a->next;
	}

	while (b != NULL)
	{
		numB++;
		b = b->next;
	}

	if (numA > numB) {
		offset = numA - numB;
		while (offset > 0)
		{
			offset--;
			headA = headA->next;
		}
	}
	else
	{
		offset = numB - numA;
		while (offset > 0)
		{
			offset--;
			headB = headB->next;
		}
	}

	while (headA != headB)
	{
		headA = headA->next;
		headB = headB->next;
	}

	return headA;
}