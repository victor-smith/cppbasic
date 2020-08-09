#include "cpph.h"

#define ArSize 20

int main()
{
	char name[ArSize];
	cout<<"Input name:";
	cin>>name;
	int i=0;
	cout<<strlen(name)<<endl;
	while(name[i] != '\0')
	{
		cout<<name[i]<<":"<<int(name[i])<<endl;
		i++;
	}
	return 0;
}
