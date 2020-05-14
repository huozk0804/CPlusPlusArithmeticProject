#include"LinkList.h"

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* h1 = new ListNode(-1), * h2 = h1;
	int ten = 0;
	while (l1 != NULL || l2 != NULL)
	{
        dataType temp = ten;
        if (l1)
        {
            temp += l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            temp += l2->val;
            l2 = l2->next;
        }

		ten = temp / 10;
		h2->next = new ListNode(temp % 10);
		h2 = h2->next;
	}

	if (ten > 0)
		h2->next = new ListNode(ten);
	return h1->next;
}