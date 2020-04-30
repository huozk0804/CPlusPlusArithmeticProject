#include"QueueAndStack.h"

MyQueue::MyQueue() {
	start = 0;
}

bool MyQueue::enQueue(type val) {
	data.push_back(val);
	return true;
}

bool MyQueue::deQueue() {
	if (isEmpty())
		return false;

	start++;
}

type MyQueue::front() {
	return data[start];
}

bool MyQueue::isEmpty() {
	return start >= data.size();
}