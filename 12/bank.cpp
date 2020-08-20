#include <cpph.h>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main()
{
	srand(time(0));

	cout<<"Case study: Bank of Heather Automatic Teller\n";
	cout<<"Enter maxium size of queue:";
	int qs = 0 ;
	cin>>qs;

	Queue line(qs);
	cout<<"Enter the number of simulation hours:";
	int hours = 0;
	cin>>hours;

	long cyclelimit = MIN_PER_HR * hours;

	cout<<"Enter the average number of customer per hour:";
	double perhour = 0.0;
	cin >> perhour;

	double min_per_cust;
	min_per_cust = perhour/MIN_PER_HR;


	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for(int cycle = 0;cycle <cyclelimit; cycle++)
	{
		if(newcustomer(min_per_cust))
		{
			if(line.isfull())
				turnaways ++;
			else
			{
				customers ++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}

		if(wait_time <=0 && !line.isempty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served ++;
		}
		wait_time --;
		sum_line += line.queuecount();
	}
	if(customers>0)
	{
		cout<<"customers accepted:"<<customers<<endl;
		cout<<"customers   served:"<<served<<endl;
		cout<<"          turnawys:"<<turnaways<<endl;
		cout<<"average queue size:"<<((double)sum_line)/cyclelimit<<endl;
		cout<<"average wait  time:"<<((double)line_wait)/served<<endl;
	}
	else
	{
		cout<<"No customers\n";
	}
	cout<<"bye!\n";
	
	return 0;
}


bool newcustomer(double x)
{
	static bool flag = false;
	if(!flag)
	{
		cout<<RAND_MAX<<endl;
		flag = true;
	}
	return (rand()*x/RAND_MAX < 1);
}
