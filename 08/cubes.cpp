#include "cpph.h"

double cube(double a);
double refcube(double &a);
double refcube1(const double &a);


int main()
{
	double x = 3.0;
	cout<<cube(x)<<endl;
	cout<<" = cube of "<<x<<endl;

	cout<<refcube(x);
	cout<<" = cube of "<<x<<endl;

	cout<<refcube1(2.0)<<endl;
	cout<<refcube1(x+2.0)<<endl;
	cout<<refcube1(1+2.0)<<endl;
	return 0;
}

double cube(double a)
{
	a *=a*a;
	return a;
}

double refcube(double &a)
{
	a*=a*a;
	return a;
}

double refcube1(const double &a)
{
	return a*a*a;
}
