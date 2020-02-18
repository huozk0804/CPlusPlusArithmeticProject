# Leetcode-707：设计链表

## 1. 题目：

设计链表的实现。您可以选择使用单链表或双链表。单链表中的节点应该具有两个属性：`val` 和 `next`。`val` 是当前节点的值，`next` 是指向下一个节点的指针/引用。如果要使用双向链表，则还需要一个属性 `prev` 以指示链表中的上一个节点。假设链表中的所有节点都是 0-index 的。

在链表类中实现这些功能：

- get(index)：获取链表中第 `index` 个节点的值。如果索引无效，则返回`-1`。
- addAtHead(val)：在链表的第一个元素之前添加一个值为 `val` 的节点。插入后，新节点将成为链表的第一个节点。
- addAtTail(val)：将值为 `val` 的节点追加到链表的最后一个元素。
- addAtIndex(index,val)：在链表中的第 `index` 个节点之前添加值为 `val` 的节点。如果 `index` 等于链表的长度，则该节点将附加到链表的末尾。如果 `index` 大于链表长度，则不会插入节点。如果`index`小于0，则在头部插入节点。
- deleteAtIndex(index)：如果索引 `index` 有效，则删除链表中的第 `index` 个节点。

 

**示例：**

```
MyLinkedList linkedList = new MyLinkedList();
linkedList.addAtHead(1);
linkedList.addAtTail(3);
linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
linkedList.get(1);            //返回2
linkedList.deleteAtIndex(1);  //现在链表是1-> 3
linkedList.get(1);            //返回3
```

 

**提示：**

- 所有`val`值都在 `[1, 1000]` 之内。
- 操作次数将在 `[1, 1000]` 之内。
- 请不要使用内置的 LinkedList 库。

## 2. 答案：

### SingleLinkedList.h

```c++
#pragma once

#include <iostream>

using namespace std;

//结点的数据类型
struct SingleListNode
{
	int data; //数据
	struct SingleListNode* next;  //下一个指针
	SingleListNode(int num) :data(num), next(NULL) {};
};

class SingleLinkedList
{
private:
	int ListSize;
	SingleListNode* head;
	SingleListNode* tail;
public:
	SingleLinkedList();  //初始化
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void deleteAtIndex(int index);

	void PrintList();
};
```

### SingleLinkedList.cpp

```c++
#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() :head(NULL), tail(NULL), ListSize(0) {}

int SingleLinkedList::get(int index)
{
	if (index < 0 || index >= ListSize) return -1;
	SingleListNode* current = head;
	for (int i = 0; i < index + 1; ++i) current = current->next;
	if (current != NULL) return -1;
	return current->data;
}

void SingleLinkedList::addAtHead(int val)
{
	SingleListNode* ptr = head;
	SingleListNode* curPtr = new SingleListNode(val);
	curPtr->next = ptr;
	head = curPtr;

	if (tail == NULL)
		tail = curPtr;

	ListSize++;
}

void SingleLinkedList::addAtTail(int val)
{
	if (tail == NULL)
	{
		head = new SingleListNode(val);
		tail = head;
	}
	else
	{
		tail->next = new SingleListNode(val);
		tail = tail->next;
	}

	ListSize++;
}

void SingleLinkedList::addAtIndex(int index, int val)
{
	if (index == 0)addAtHead(val);
	else if (index == ListSize)addAtTail(val);
	else if (index > 0 && index < ListSize)
	{
		SingleListNode* ptr = head;
		while (--index)
		{
			if (ptr == NULL) return;
			ptr = ptr->next;
		}

		SingleListNode* inserter = new SingleListNode(val);
		if (ptr != NULL)
		{
			inserter->next = ptr->next;
			ptr->next = inserter;
		}
		else
			ptr = inserter;

		ListSize++;
	}
}

void SingleLinkedList::deleteAtIndex(int index)
{
	if (index == 0)
	{
		SingleListNode* ptr = head;
		head = head->next;
		delete ptr;
		ListSize--;
	}
	else if (index > 0 && index < ListSize)
	{
		SingleListNode* pre = head;
		for (int i = 1; i < index; i++)
		{
			if (pre == NULL) break;;
			pre = pre->next;
		}

		if(pre!=NULL)
		{
			SingleListNode* del = pre->next;
			if (del != NULL)
			{
				pre->next = del->next;
				delete del;
			}

			if (index == ListSize - 1)
				tail = pre;

			ListSize--;
		}

	}
}

void SingleLinkedList::PrintList()
{
	SingleListNode* p = head;

	while (p != NULL)
	{
		cout << p->data << "\t";
		p = p->next;
	}

	cout << "输出结束" << endl;
}
```

## 3. 解题思路

### 3.1 链表数据类型

这块没啥好说的，就是存储数据和指向下一个结点的指针。

### 3.2 获取结点

首先需要判断是否不在这个链表的取值范围内，如果不再则返回错误码 -1。

如果在，则获取头节点，通过头节点向下遍历结点，获取到索引值的结点，然后需要判断结点是否为空，不为空则返回结点内的数据。

### 3.3 在第 index 个结点前添加值为 val 的结点

判断索引结点是否为 0 或者 链表的长度，如果是则按照添加头节点或尾结点的方式添加结点。

如果不是则通过头节点向下循环指向到索引结点；创建新结点，把新结点指向到索引结点的下一个结点，然后把索引结点的指向为新创建的结点。

不过要注意索引结点为空的可能，和索引大于零和小于链表长度的限制。

### 3.4 删除指定结点

首先判定索引是否为 0，如果为 0 则删除头节点，重新赋值头节点。

如果不为零则通过头节点向下循环指向，找到索引结点的指向结点即要删除的结点，把索引结点的指向指向到删除结点的指向结点上即可，然后把删除结点释放掉。

还是要注意索引大于零和小于链表长度的限制。

### 3.5 插入头节点和尾结点

插入头节点和尾结点相对简单，不过要注意的是 头节点和尾结点为空和链表长度增大这两点。