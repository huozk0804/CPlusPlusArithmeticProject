#include"LinkList.h"
ListNode* OddEvenLinkedList::oddEvenList(ListNode* head) {
	if (head == NULL)return NULL;
	ListNode* odd = head, * even = head->next, * evenHead = even;
	while (even != NULL && even->next != NULL)
	{
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	odd->next = evenHead;
	return head;
}