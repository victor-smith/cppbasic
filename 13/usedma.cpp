#include <cpph.h>
#include "dma.h"

int main()
{
	BaseDMA shirt("Portabelly", 8);
	LacksDMA ballon("red", "Blimpo", 4);
	HasDMA map("Mercator","Buffalo Keys",5);

	cout<<shirt<<endl<<ballon<<endl<<map<<endl;

	HasDMA map2 = map;
	LacksDMA ballon2(ballon);
	cout<<ballon2<<endl<<map2<<endl;

	return 0;
}
