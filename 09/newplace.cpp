#include "cpph.h"

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main()
{
	double *p1, *p2;
	int i;

	cout<<"Calling new and placement new:\n";
	p1 = new double[N];
	p2 = new (buffer) double [N];
	for(i=0; i<N; i++)
	{
		p1[i]=p2[i]=100*i;
	}

	cout<<"After new and placement new:\n";
	cout<<"buffer address:"<<&buffer<<endl;

	for(i=0; i<N; i++)
	{
		cout<<p1[i]<<" at :"<<&p1[i];
		cout<<" "<<p2[i]<<" at :"<<&p2[i]<<endl;
	}

	return 0;
}
