#include "cpph.h"

int main()
{
	char str1[20];
	str1[0]=0;
	char str3[20] = "nihao";
	char str4[20] = " jerray";
	string str2="hello world!";

	cout<<str1<<":"<<strlen(str1)<<endl;
	cout<<str2<<":"<<str2.size()<<endl;

	cout<<str1<<endl;
	
	strcat(str4, str3);
	cout<<str4<<endl;
	strcpy(str4, str3);
	cout<<str4<<endl;
	return 0;
}
