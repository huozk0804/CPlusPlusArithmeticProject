#include"LinkList.h"

ListNode* RemoveLinkedListElements::removeElements(ListNode* head, int val) {
	ListNode* temp = head;

	if (head == NULL)
		return NULL;

	while (temp->next != NULL)
	{
		if (head->val == val) {
			head = head->next;
			temp = head;
		}
		else if (temp->next->val == val) {
			temp->next = temp->next->next;
			temp = head;
		}
		else
			temp = temp->next;
	}

	if (head->val == val)
		return NULL;

	return head;
}