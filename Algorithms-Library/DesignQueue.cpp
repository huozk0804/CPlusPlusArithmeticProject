#include"QueueAndStack.h"

Queue::Queue() {
	start = 0;
}

bool Queue::enQueue(dataType val) {
	data.push_back(val);
	return true;
}

bool Queue::deQueue() {
	if (isEmpty())
		return false;

	start++;
}

dataType Queue::front() {
	return data[start];
}

bool Queue::isEmpty() {
	return start >= data.size();
}