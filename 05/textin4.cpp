#include "cpph.h"

int main()
{
	int count;
	char ch;

	while((ch=cin.get())!=EOF)
	{
		cout.put(ch);
		count++;
	}

	cout<<endl<<count<<" characters read"<<endl;

	return 0;
}
