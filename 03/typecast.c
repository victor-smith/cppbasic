#include "cpph.h"

int main()
{

	float f1 = 3.15, f2 = 4.99;
	int a = f1+f2;
	int b = (int)f1+(int)f2;
	int c = static_cast<int>(f1);
	int d = static_cast<int>(f2);


	cout<<"f1:"<<f1<<"  f2:"<<f2<<endl;
	cout<<"int a = f1+f2;"<<a<<endl;
	cout<<"int b = (int)f1+(int)f2;"<<b<<endl;
	cout<<"int c = static_cast<int>(f1);"<<c<<endl;
	cout<<"int d = static_cast<int>(f2);"<<d<<endl;

	return 0;
}
