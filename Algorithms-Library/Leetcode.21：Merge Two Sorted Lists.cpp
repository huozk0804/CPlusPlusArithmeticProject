#include"LinkList.h"
ListNode* MergeTwoSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* h1 = new ListNode(-1), * h2 = h1;
	while (l1 != NULL && l2 != NULL)
	{
		if (l1->val < l2->val) {
			h2->next = l1;
			l1 = l1->next;
		}
		else
		{
			h2->next = l2;
			l2 = l2->next;
		}
		h2 = h2->next;
	}
	h2->next = l1 ? l1 : l2;
	return h1->next;
}