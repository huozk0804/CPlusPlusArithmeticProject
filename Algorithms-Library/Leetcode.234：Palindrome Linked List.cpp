#include"LinkList.h"

ListNode* PalindromeLinkedList::reverselist(ListNode* head) {
	ListNode* pre = NULL, * next = NULL;
	while (head != NULL)
	{
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}

bool PalindromeLinkedList::isPalindrome(ListNode* head) {
	if (head == NULL || head->next == NULL)
		return true;
	ListNode* slow = head, * fast = head;
	while (fast->next != NULL && fast->next->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	slow->next = reverselist(slow->next);
	slow = slow->next;
	while (slow != NULL)
	{
		if (slow->val != head->val)
			return false;
		slow = slow->next;
		head = head->next;
	}

	return true;
}