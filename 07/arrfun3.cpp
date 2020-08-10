#include "cpph.h"

const int Max = 5;
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double ar[], int n);

int main()
{
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	
	cout<<"Enter revaluation factor:";
	double factor;
	cin>>factor;
	revalue(factor, properties, size);
	show_array(properties, size);
	cout<<"Done!"<<endl;
	return 0;
}

int fill_array(double arr[], int limit)
{
	double temp;
	int i;
	for(i=0; i<limit;i++)
	{
		cout<<"Enter value #"<<(i+1)<<":";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout<<"Bad input: input process terminated.\n";
			break;
		}
		else if(temp<0)
		{
			break;
		}

		arr[i]=temp;
	}
	return i;
}

void show_array(const double arr[], int n)
{
	for(;n>0;n--)
	{
		cout<<*arr++<<" ";
	}
	cout<<endl;
}


void revalue(double r, double arr[], int n)
{
	for(;n>0; n--)
	{
		arr[n-1] = arr[n-1]*r;
	}
}
