#include "cpph.h"

const int SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream inFile;

	cout<<"Enter name of data file:";
	cin.getline(filename, SIZE);
	inFile.open(filename);

	if(!inFile.is_open())
	{
		cout<<"Open file failed!"<<endl;
		exit(1);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile>>value;
	while(inFile.good())
	{
		++count;
		sum += value;
		inFile>>value;
	}

	if(inFile.eof())
	{
		cout<<"End file reached!"<<endl;
	}
	else if(inFile.fail())
	{
		cout<<"Input terminated for unkown reason!"<<endl;
	}
	else
	{
		cout<<"No data processed!"<<endl;
	}

	if(count == 0)
	{
		cout<<"No data processed!"<<endl;
	}
	else
	{
		cout<<"Items read:"<<count<<endl;
		cout<<"Sum:"<<sum<<endl;
		cout<<"Averange :"<<sum/count<<endl;
	}

	inFile.close();
	return 0;
}
