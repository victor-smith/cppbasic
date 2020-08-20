#include "cpph.h"
#include "mytime1.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
	hours = minutes / 60;
	minutes %= 60;
}

Time Time::operator + (const Time &t) const
{
	// minutes and hours are private
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours;
	sum.hours += sum.minutes / 60;
	sum.minutes = sum.minutes % 60;
	return sum;
}

void Time::Show() const
{
	cout<<hours<<" hours,"<< minutes<<" minutes."<<endl;
}

