#include "cpph.h"

int main()
{
	const int Arsize = 16;
	double factorials[Arsize];
	factorials[0] = factorials[1] = 1.0;

	int i;

	for(i=2; i<Arsize; i++)
		factorials[i] = i*factorials[i-1];

	for(i=0; i<Arsize; i++)
	{
		cout<<factorials[i]<<" ";
		if((i+1)%5==0)
			cout<<endl;
	}
	cout<<endl;

	return 0;
}
