#include "cpph.h"

struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	rect rplace;
	polar pplace;
	
	cout<<"Enter the x and y values:";
	while(cin>>rplace.x>>rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout<<"\nNext two numbers (q to quit):";
	}
	cout <<"Done\n";
	return 0;
}

polar rect_to_polar(rect xypos)
{
	polar p;

	p.distance = sqrt(pow(xypos.x, 2)+pow(xypos.y, 2));
	p.angle = atan2(xypos.y, xypos.x);

	return p;
}


void show_polar(polar p)
{
	cout<<"Distance :"<<p.distance<<endl;
	cout<<"Angle:"<<p.angle*180/3.1415926<<endl;
}
