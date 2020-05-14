#include"QueueAndStack.h"

DesignCircularQueue::DesignCircularQueue() {
	head = tail = 0;
}

bool DesignCircularQueue::EnQueue(dataType val) {
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

dataType DesignCircularQueue::Front() {
	if (isEmpty())return -1;
	return queue[head];
}

dataType DesignCircularQueue::Rear() {
	if (isEmpty())return -1;
	return queue[tail];
}

bool DesignCircularQueue::isEmpty() {
	if (head = tail == 0)return true;
	else  return false;
}

bool DesignCircularQueue::isFull() {

}