#include "cpph.h"

template <class Any>
void Swap(Any &a, Any &b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template<>  void Swap<job>(job &jb1, job & jb2);

void Show(job j)
{
	cout<<j.name<<":"<<j.salary<<":"<<j.floor<<endl;
}

int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i=10,j=20;
	cout<<"before i,j="<<i<<","<<j<<endl;
	Swap(i,j);
	cout<<"after i,j="<<i<<","<<j<<endl;

	job j1 ={"j1", 90909, 7};
	job j2={"j2", 10101, 1};
	cout<<"before swap:"<<endl;
	Show(j1);
	Show(j2);

	Swap(j1, j2);

	cout<<"after swap:"<<endl;
	Show(j1);
	Show(j2);


	return 0;
}


template <class Any>
void Swap( Any &a, Any &b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}


template<> void Swap<job>(job &j1, job &j2)
{
	double tmp = j1.salary;
	j1.salary = j2.salary;
	j2.salary = tmp;
}
