#include "LinkList.h"

bool LinkedListCycle::hasCycle(ListNode* head) {
	ListNode* fast = head, * solw = head;
	while (fast && fast->next)
	{
		solw = solw->next;
		fast = fast->next->next;
		if (solw == fast)return true;
	}
	return false;
}