#include "cpph.h"

int main()
{
	int *ptr;
	//ptr = 0x80000; //error: invalid conversion from ‘int’ to ‘int*’

	if(ptr != NULL)
		cout<<*ptr<<endl;

	ptr = (int*)0x80000;
	cout<<"before access the memory address"<<endl;
	cout<<*ptr<<endl;

	return 0;
}
