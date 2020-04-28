// AlgorithmsLibraryMain.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������

#include <iostream>
#include <string>
#include "LinkList.h"

using namespace  std;

int main()
{

	cout << "AlgorithmsLibraryMain..." << endl;

	MyLinkedList* a = new MyLinkedList();
	a->addAtHead(1);
	a->PrintList();

	a->addAtTail(3);
	a->PrintList();

	a->addAtIndex(1, 2);
	a->PrintList();

	cout << a->get(1) << endl;
	

	a->deleteAtIndex(1);
	a->PrintList();

	cout << a->get(1) << endl;

	return 0;
}