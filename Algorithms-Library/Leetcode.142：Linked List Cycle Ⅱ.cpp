#include "LinkList.h"

ListNode* LinkedListCycle¢ò::detectCycle(ListNode* head) {
	ListNode* fast = head, * solw = head;

	while (fast && fast->next)
	{
		solw = solw->next;
		fast = fast->next->next;
		if (solw == fast) {
			while (head != fast)
			{
				head = head->next;
				fast = fast->next;
			}
			return head;
		}
	}
	return NULL;
}