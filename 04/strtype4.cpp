#include "cpph.h"

//cin.getline input number of the string is more than the item len, the all will go.
//https://blog.csdn.net/selina8921/article/details/79067941
//https://blog.csdn.net/pdcxs007/article/details/45671379/

int main()
{
	char charr1[10];
	string str;

	cout<<"input ten char:"<<endl;
	cin.getline(charr1,10);
	cout<<charr1<<endl;


	cin.clear();
	cin.ignore(256,'\n');

	cout<<"input >ten char:"<<endl;
	getline(cin, str);
	cout<<str<<endl;


	char a, b;

	cin.get(a);
	cout<<a<<endl;

	cin.get(b);
	cout<<b<<endl;

	return 0;
}
