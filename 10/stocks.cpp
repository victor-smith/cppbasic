#include "cpph.h"

class Stock{
	private:
		char company[30];
		int shares;
		double share_val;
		double total_val;
		void set_tot(){total_val = shares*share_val;}
	public:
		void acquire(const char *co, int n, double pr);
		void buy(int num, double price);
		void sell(int num, double price);
		void update(double price);
		void show();
};

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

int main()
{

	//exit_func();
	//cout<<"after of exit_func()"<<endl;

	Stock stock1;
	stock1.acquire("NanoSmart", 20, 12.50);
	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	stock1.show();

	stock1.buy(15, 18.25);
	stock1.show();

	stock1.sell(400, 20);
	stock1.show();

	return 0;
}
