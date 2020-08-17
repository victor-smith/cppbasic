#include "cpph.h"
#include "stock1.h"


int main()
{

	//exit_func();
	//cout<<"after of exit_func()"<<endl;

	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios_base::showpoint);

	Stock stock1("NanoSmart", 20, 12.50);
	stock1.show();
	Stock stock2("BoffoObjects", 2, 2.0);
	stock2.show();

	cout<<"Assigning stock1 to stock2:\n";
	stock2 = stock1;
	cout<<"Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();

	cout<<"Using a constructor to reset an object:\n";
	stock1 = Stock("Nifty Foods", 10, 50.0);
	cout<<"Revised stock1:\n";
	stock1.show();

	return 0;
}
