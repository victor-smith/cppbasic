#include "cpph.h"

int main()
{
	struct inflatable
	{
		char name[20];
		float volume;
		double price;
	} guests[2] = {
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	cout<<guests[0].name<<":"<<guests[0].volume<<":"<<guests[0].price<<endl;
	cout<<guests[1].name<<":"<<guests[1].volume<<":"<<guests[1].price<<endl;

	return 0;
}
