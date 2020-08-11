#include "cpph.h"

struct sysop
{
	char name[26];
	char quote[64];
	int used;
};

const sysop& use(sysop &sysopref);

int main()
{
	sysop looper = {
		"Rick \"Fortran\" Looper",
		"I'm a goto kind of guy",
		0
	};


	use(looper);
	cout<<"Looper:"<<looper.used<<endl;

	sysop copycat;
	copycat = use(looper);
	cout<<"Looper:"<<looper.used<<endl;
	cout<<"copycat:"<<copycat.used<<endl;
	cout<<"use(looper):"<<use(looper).used<<endl;

	cout<<&copycat<<":"<<&looper<<endl;
	cout<<copycat.used<<endl;
	cout<<use(copycat).used<<endl;
	return 0;
}


const sysop & use(sysop &op)
{
	cout<<op.name<<" says:"<<endl;
	cout<<op.quote<<endl;
	op.used++;
	return op;
}
