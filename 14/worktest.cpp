#include <cpph.h>
#include "worker0.h"

int main()
{
	Waiter bob("Bob Apple",314L, 3);
	Singer bev("Beverly Hilles", 522L, 3);
	Waiter w_temp;
	Singer s_temp;

	Worker * pw[4] = {&bob, &bev, &w_temp, &s_temp};
	int i;
	for(i=0; i<4; i++)
	{
		pw[i]->Set();
	}

	for(i=0; i<4; i++)
	{
		pw[i]->Show();
	}

	return 0;
}
