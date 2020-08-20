#include <cpph.h>
#include "queue.h"

void Customer::set(long when)
{
	processtime = rand()%3 + 1;
	arrive = when;
}

Queue::Queue(int qs):qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node *temp;
	while(front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty() const 
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items >= qsize;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item &item)
{
	if(isfull())
		return false;

	Node *n = new Node();
	if(n == NULL)
		return false;

	n->item = item;
	n->next = NULL;
	if(isempty())
		front = n;
	else
		rear->next = n;
	items ++;
	rear = n;

	return true;
}

bool Queue::dequeue(Item &item)
{
	if(isempty())
		return false;

	item = front->item;
	front = front->next;
	items--;

	if(isempty())
		rear = NULL;
	return true;
}
