#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
	private:
		enum{MAX=30};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool isempty();
		bool isfull();
		bool push(const Item &item);
		bool pop(Item &item);
};

#endif
