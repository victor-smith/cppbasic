#include "cpph.h"
#include "stack.h"

int main()
{
	Stack stack;
	char ch;
	unsigned long po;
	cout<<"Please enter A to add a purchase order,\n"
		<<"P to process a PO, or Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n');

		if(!isalpha(ch))
		{
			cout<<'\a';
			continue;
		}

		switch(ch)
		{
			case 'A':
			case 'a':
				cout<<"Enter a PO number to add:";
				cin>>po;
				if(stack.isfull())
				{
					cout<<"stack already full\n";
				}else
				{
					stack.push(po);
				}
				break;
			case 'p':
			case 'P':
				if(stack.isempty())
				{
					cout<<"stack is empty\n";
				}else
				{
					stack.pop(po);
					cout<<"PO #"<<po<<" poped!\n";
				}
				break;
		}

		cout<<"Please enter A to add a purchase order,\n"
			<<"P to process a PO, or Q to quit.\n";
	}

	cout<<"Bye!\n";
	return 0;
}
