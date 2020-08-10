#include "cpph.h"

long double probability(unsigned numbers, unsigned picks);

int main()
{
	SIZE(unsigned);
	SIZE(long double);

	double total, choices;
	cout<<"Enter the total number of choices on the game card and \n"
		"the number of picks allowed:";
	while((cin>>total>>choices) && choices <= total)
	{
		cout<<"You have on chance in ";
		cout<<probability(total, choices);
		cout <<" of winning."<<endl;
		cout<<"Next two numbers (q to quit):"<<endl;
	}
	cout <<"bye"<<endl;
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double ret = 1.0;

	for(; picks>0; numbers--, picks--)
	{
		ret = ret*numbers/picks;
	}

	return ret;
}
