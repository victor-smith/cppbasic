#include "cpph.h"

void err_quit()
{
	cout<<"quit"<<endl;
	exit(1);
}


int main()
{
	int *ptr1 = new int;
	int *ptr2 = (int*)malloc(4);
	int *ptr3 = ptr1;
	int n = 5;
	int *ptr4 = &n;
cout<<ptr2<<endl;
cout<<ptr3<<endl;
	double *pd = new double [3];
cout<<pd<<endl;
cout<<pd+1<<endl;
	if(pd == NULL)
	{
		err_quit();
	}
	pd[0] = 0.2;
	pd[1] = 0.5;
	pd[2] = 0.8;

//	cout<<pd[0]<<endl;
	cout<<pd[1]<<endl;
	cout<<pd[2]<<endl;

	pd=pd+1;
	cout<<pd[0]<<endl;

	pd=pd-1;
//	cout<<pd[0]<<endl;

	delete [] pd;
	delete ptr1;
	delete ptr2; 
	delete ptr3; 
	//delete ptr4; //8022 abort (core dumped)


	return 0;
}
