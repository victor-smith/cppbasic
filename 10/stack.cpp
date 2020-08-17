#include "cpph.h"
#include "stack.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::isempty()
{
	return top == 0;
}

bool Stack::isfull()
{
	return top == MAX;
}

bool Stack::push(const Item &item)
{
	if(isfull())
	{
		cerr<<"Stack is full, can not push\n";
		return false;
	}

	items[top++] = item;
	return true;
}

bool Stack::pop(Item &item)
{
	if(isempty())
	{
		return false;
	}
	
	item = items[--top];
	return true;
}
