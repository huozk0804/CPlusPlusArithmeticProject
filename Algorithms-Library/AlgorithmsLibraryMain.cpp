// AlgorithmsLibraryMain.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������

#include <iostream>
#include <string>

using namespace  std;

#include "CircularLinkedList.h"

int main()
{
	int l1[4] = { 3,2,0,-4 };
	CircularLinkedList* l2 = new  CircularLinkedList(l1, 4);
	cout << l2->hasCycle(l2->head) << endl;

	cout << "AlgorithmsLibraryMain..." << endl;
	return 0;
}