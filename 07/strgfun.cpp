#include "cpph.h"

int c_in_str(const char *str, char c);

int main()
{
	char mmm[15] = "minimum";
	const char *wail = "ululate";

	int ms = c_in_str(mmm, 'm');
	int ns = c_in_str(wail, 'u');

	cout<<ms<<" m character in " << mmm<<endl;
	cout<<ns<<" n character in " << wail<<endl;
	return 0;
}

int c_in_str(const char *str, char c)
{
	int count = 0;
	while(*str)
	{
		if(*str++==c)
			count++;
	}

	return count;
}
