#include "LinkList.h"

ListNode* ReverseLinkedList::reverseList(ListNode* head) {
	ListNode* temp = head, * newHead = NULL;
	while (temp != NULL)
	{
		ListNode* tmp = new ListNode(temp->val);
		tmp->next = newHead;
		newHead = tmp;
		temp = temp->next;
	}
	return newHead;

	//µİ¹é·½·¨
	//if (head == NULL || head->next == NULL) return head;
	//ListNode* reversedHead = reverseList(head->next);
	//head->next->next = head;
	//head->next = NULL;
	//return reversedHead;
}