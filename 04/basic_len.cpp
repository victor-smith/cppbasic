#include "cpph.h"

#define SIZE(X) cout<<#X<<":"<<sizeof(X)<<endl;

int main()
{
	SIZE(int);
	SIZE(float);
	SIZE(long);
	SIZE(double);
	SIZE(int *);

	return 0;
}
