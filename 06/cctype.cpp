#include "cpph.h"


int main()
{
	cout<<"Enter text for analysis, and type @ to terminate input"<<endl;
	
	char ch;
	int witespace = 0;
	int digits = 0;
	int chars = 0;
	int puncts = 0;
	int others = 0;

	cin.get(ch);
	while(ch != '@')
	{
		if(isspace(ch))
		{
			witespace++;
		}
		else if(isdigit(ch))
			digits++;
		else if(isalpha(ch))
			chars++;
		else if(ispunct(ch))
			puncts ++;
		else
			others++;

		cin.get(ch);
	}

	cout<<"space :"<<witespace<<endl;
	cout<<"digit:"<<digits<<endl;
	cout<<"char:"<<chars<<endl;
	cout<<"punct:"<<puncts<<endl;
	cout<<"others:"<<others<<endl;
	
	return 0;
}
