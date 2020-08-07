#include "cpph.h"

int main()
{
	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout<<animal<<" and ";
	cout<<bird<<endl;

	cout<<"Enter a kind of animal:";
	cin>>animal;


	ps = animal;
	cout<<ps<<" s!"<<endl;
	cout<<"before using strcpy();"<<endl;
	cout<<animal<<" at "<<(int*)animal<<" sizeof it is:"<<
		sizeof(animal)<<"/"<<strlen(animal)<<endl;
	cout<<ps<<" at "<<(int*)ps<<endl;

	ps = new char[strlen(animal)+1];
	strcpy(ps, animal);
	cout<<"ater using strcpy();"<<endl;
	cout<<animal<<" at "<<(int*)animal<<endl;
	cout<<ps<<" at "<<(int*)ps<<endl;

	delete [] ps;

	return 0;
}
