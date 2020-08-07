#include "cpph.h"

char * getname();

int main()
{
	char *name;
	name = getname();
	cout<<name<<" at "<<(int*)name<<endl;

	delete [] name;

	name = getname();
	cout<<name<<" at "<<(int*)name<<endl;
	delete [] name;
	return 0;
}

char *getname()
{
	char temp[20];
	cout<<"Enter the name:"<<endl;
	cin>>temp;
	char *pn = new char [strlen(temp)+1];
	strncpy(pn, temp, strlen(temp)+1);

	return pn;
}
