#include "cpph.h"
#include "stock1.h"

Stock::Stock()
{
	cout<<"Default constructor called\n";
	strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	set_tot();
}

Stock::Stock(const char* co, int n, double pr)
{
	cout<<"Constructor using "<<co<<" Called!\n";
	strncpy(company, co, 29);
	company[29] = '\0';

	
	if(n<0)
	{
		cerr<<"number of shares can't be negative"<<endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}

	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	cout<<"Bye,"<<company<<endl;
}

void Stock::acquire(const char* co, int n, double pr)
{
	strncpy(company, co, 29);
	company[29]='\0';
	if(n<0)
	{
		cerr<<"number of shares can't be negative"<<endl;
		shares = 0;
	}
	else
	{
		shares = n;
	}

	share_val = pr;
	set_tot();
}

void Stock::buy(int num, double pri)
{
	if(num <0)
	{
		cerr<<"Number of shares can't be negative, Transaction is aborted!"<<endl;
	}
	else
	{
		shares += num;
		share_val = pri;
		set_tot();
	}
}

void Stock::sell(int num, double pric)
{
	if(num <0)
	{
		cerr<<"Number of shares can't be negative, Transaction is aborted!"<<endl;
	}
	else if(num >shares)
	{
		cerr<<"Number of shares can't be more than you have, Transaction is aborted!"<<endl;
	}
	else
	{
		shares -= num;
		share_val = pric;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout<<"Company:"<<company
		<<"\tShares:"<<shares
		<<"\tShare Price:"<<share_val
		<<"\tTotal Worth:"<<total_val<<endl;
}

void exit_func()
{
	exit(1);
}

const Stock &Stock::topval(const Stock & st) const
{
	if(st.total_val > total_val)
		return st;
	else
		return *this;
}
