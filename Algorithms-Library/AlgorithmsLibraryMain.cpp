// AlgorithmsLibraryMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

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