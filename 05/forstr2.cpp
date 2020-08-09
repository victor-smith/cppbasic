#include "cpph.h"

int main()
{
	int i, j;
	string str;
	char tmp;

	cout<<"Enter one string:";
	cin>>str;
	cout<<str<<endl;

	for(i=0, j=str.size()-1; i<j; i++,j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	cout <<str<<endl;

	return 0;
}
