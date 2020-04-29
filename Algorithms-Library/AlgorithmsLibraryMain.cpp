// AlgorithmsLibraryMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include <string>
#include "LinkList.h"

using namespace  std;

int main()
{

	cout << "AlgorithmsLibraryMain..." << endl;
	DesignLinkedList* h1= new DesignLinkedList();
	h1->addAtTail(1);
	//h1->addAtTail(4);
	//h1->addAtTail(3);
	h1->PrintList();

	DesignLinkedList* h2 = new DesignLinkedList();
	h2->addAtTail(9);
	h2->addAtTail(9);
	//h2->addAtTail(4);
	h2->PrintList();

	AddTwoNumbers a;
	h2->PrintList(a.addTwoNumbers(h1->head, h2->head));
	return 0;
}