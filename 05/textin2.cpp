#include "cpph.h"

int main()
{
	char ch;
	int count = 0;

	cout <<"Enter character, enter # to quit:";
	cin.get(ch);
	while(ch != '#')
	{
		cout<<ch;
		++count;
		cin.get(ch);
	}
	cout <<endl<<count<<" character read\n";


	cin.ignore(256, '\n');

	char name[20];
	cout<<"enter the name:"<<endl;
	cin.get(name, 20);
	cout<<name<<endl;
	return 0;
}
