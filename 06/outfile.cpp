#include "cpph.h"

int main()
{
	char automobile[50];

	int year;
	double a_price;
	double b_price;
	ofstream outFile;
	outFile.open("carinfo.txt");

	cout<<"Enter the make and model of automobile:";
	cin.getline(automobile,50);
	cout<<"Enter the model year:";
	cin>>year;
	cout<<"Enter the original asking price:";
	cin>>a_price;
	b_price = 0.913 * a_price;

	cout<<fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout<<"Make adn model:"<<automobile<<endl;
	cout<<"Year:"<<year<<endl;
	cout<<"Was asking $"<<a_price<<endl;
	cout<<"Now asking $"<<b_price<<endl;

	outFile<<fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile<<"Make adn model:"<<automobile<<endl;
	outFile<<"Year:"<<year<<endl;
	outFile<<"Was asking $"<<a_price<<endl;
	outFile<<"Now asking $"<<b_price<<endl;

	outFile.close();
	return 0;
}
