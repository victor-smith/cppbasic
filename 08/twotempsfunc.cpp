#include "cpph.h"

template <class Any>
void Swap(Any &a, Any &b);

template <class Any>
void Swap(Any *a, Any *b, int n);

template <class Any>
void Show(Any a[], int n);
const int Lim = 8;

int main()
{
	int i=10, j=20;
	cout<<"i,j = "<<i<<","<<j<<endl;
	cout<<"Using compiler-generated int swapper:"<<endl;
	Swap(i, j);
	cout<<" Now i,j="<<i<<","<<j<<endl;

	int d1[Lim] = {1, 2, 3, 4, 5, 6, 7, 8};
	int d2[Lim] = {11, 12, 13, 14, 15, 16, 17, 18};

	Show(d1, Lim);
	Show(d2, Lim);
	Swap(d1, d2, Lim);
	Show(d1, Lim);
	Show(d2, Lim);
	
	return 0;
}

template <class Any>
void Swap(Any &a, Any &b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

template <class Any>
void Swap(Any a[], Any b[], int n)
{
	Any temp;
	for(int i=0; i<n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

template <class Any>
void Show(Any a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

