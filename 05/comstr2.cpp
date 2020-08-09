#include "cpph.h"

int main()
{
	string word = "?ate";
	char ch ;
	for(ch ='a'; word != "mate"; ch++)
	{
		cout << word<<endl;
		word[0]=ch;
	}

	cout <<"after the loop, word:"<<word<<endl;

	return 0;
}
