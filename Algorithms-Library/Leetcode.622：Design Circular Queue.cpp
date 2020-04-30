#include"QueueAndStack.h"

DesignCircularQueue::DesignCircularQueue() {
	head = tail = 0;
}

bool DesignCircularQueue::EnQueue(type val) {
	if (isEmpty() || isFull())return false;
	queue.push_back(val);
	tail++;
	return true;
}

bool DesignCircularQueue::DeQueue() {
	if (isEmpty())return false;
	head++;
	return true;
}

type DesignCircularQueue::Front() {
	if (isEmpty())return -1;
	return queue[head];
}

type DesignCircularQueue::Rear() {
	if (isEmpty())return -1;
	return queue[tail];
}

bool DesignCircularQueue::isEmpty() {
	if (head = tail == 0)return true;
	else  return false;
}

bool DesignCircularQueue::isFull() {

}