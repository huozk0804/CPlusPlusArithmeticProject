// AlgorithmsLibraryMain.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������

#include <iostream>
#include <string>
#include "LinkList.h"

using namespace  std;

int main()
{

	cout << "AlgorithmsLibraryMain..." << endl;
	MyLinkedList* head = new MyLinkedList();
	head->addAtTail(1);
	head->addAtTail(0);
	head->addAtTail(0);
	//head->addAtTail(4);
	//head->addAtTail(5);
	head->PrintList();

	PalindromeLinkedList a;
	cout << a.isPalindrome(head->head) << endl;
	return 0;
}