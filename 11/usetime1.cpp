#include <cpph.h>
#include "mytime1.h"

int main()
{
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout<<"Planning time:\n";
	planning.Show();
	
	cout<<"Coding time:\n";
	coding.Show();

	cout<<"Fixing time:\n";
	fixing.Show();

	total = coding+fixing;
	cout<<"total time:\n";
	total.Show();

	Time addtime(5, 10);
	cout<<"Add time:\n";
	addtime.Show();
	addtime = total.operator +(addtime);

	cout<<"After add time:\n";
	addtime.Show();

	return 0;
}
