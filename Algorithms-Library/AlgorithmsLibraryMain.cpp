// AlgorithmsLibraryMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <string>
#include "LinkList.h"

using namespace  std;

int main()
{

	cout << "AlgorithmsLibraryMain..." << endl;
	MyLinkedList* head = new MyLinkedList();
	head->addAtTail(1);
	head->addAtTail(2);
	head->addAtTail(3);
	head->addAtTail(4);
	head->addAtTail(5);
	head->PrintList();

	ReverseLinkedList a;
	head->PrintList(a.reverseList(head->head));
	return 0;
}