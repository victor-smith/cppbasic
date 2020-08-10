#include "cpph.h"

int sum_arr(const int *ptr1, const int *ptr2);

int main()
{
	int cookies[] = {1, 2, 4, 8, 16, 32, 64, 128};

	int sum = sum_arr(cookies, cookies+8);
	cout<<"Total cookies eaten:"<<sum<<endl;

	sum = sum_arr(cookies, cookies+3);
	cout<<"First three cookies eaten:"<<sum<<endl;

	sum = sum_arr(cookies+4, cookies+8);
	cout<<"Last four eaters ate "<<sum<<endl;

	return 0;
}


int sum_arr(const int *ptr1, const int *ptr2)
{
	int ret = 0;
	while(ptr1<ptr2)
	{
		ret+=*ptr1++;
	}
	return ret;
}
