#include "CircularLinkedList.h"

CircularLinkedList::CircularLinkedList(int list[], int size) :head(new ListNode(list[0]))
{
	ListNode* pre = head;
	ListNode* cur;
	for (int i = 1; i < size; i++)
	{
		cur = new ListNode(list[i]);
		pre->next = cur;
		cout << "val:" << cur->val << endl;
		pre = cur;
	}
}

bool CircularLinkedList::hasCycle(ListNode* head)
{
	if (head == NULL || head->next == NULL) return false;

	ListNode* slow = head;
	ListNode* fast = head->next;
	while (slow != fast)
	{
		if (fast == NULL || fast->next == NULL)
			return false;
		slow = slow->next;
		fast = fast->next->next;
	}

	return true;
}
