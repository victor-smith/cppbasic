#include "vector.h"

namespace VECTOR
{
void Vector::set_mag()
{
	mag = sqrt(x*x + y*y);
}

void Vector::set_ang()
{
	if(0 == x || 0 == y)
		ang = 0;
	else
		ang = atan2(y, x);
}

void Vector::set_x()
{
	x = mag * cos(ang);
}

void Vector::set_y()
{
	y = mag * sin(ang);
}

Vector::Vector()
{
	x = y = mag = ang = 0.0;
	mode = 'r';
}

Vector::Vector(double n1, double n2, char form )
{
	mode = form;
	switch(mode)
	{
		case 'r':
			x = n1;
			y = n2;
			set_mag();
			set_ang();
			break;
		case 'p':
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
			break;
		default:
			x = y = mag = ang = 0.0;
			cerr<<"init failed\n";
	}
}

void Vector::set(double n1, double n2, char form )
{
	mode = form;
	switch(mode)
	{
		case 'r':
			x = n1;
			y = n2;
			set_mag();
			set_ang();
			break;
		case 'p':
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
			break;
		default:
			x = y = mag = ang = 0.0;
			cerr<<"init failed\n";
	}
}

Vector::~Vector(){}

void Vector::polar_mode()
{
	mode = 'p';
}

void Vector::rect_mode()
{
	mode = 'r';
}

Vector Vector::operator + (const Vector & v) const
{
	return Vector(x+v.x, y+v.y);
}

Vector Vector::operator - (const Vector & v) const
{
	return Vector(x-v.x, y-v.y);
}

Vector Vector::operator - () const
{
	return Vector(-x, -y);
}

Vector Vector::operator * (double n) const
{
	return Vector(x*n, y*n);
}


Vector operator* (double n, const Vector &v)
{
	return Vector(n*v.x, n*v.y);
}

ostream& operator << (ostream & os, const Vector &v)
{

	if(v.mode == 'r')
		os<<"(x,y) = ("<<v.x<<","<<v.y<<")"<<endl;
	else if(v.mode == 'p')
		os<<"(mag, angle) = ("<<v.mag<<","<<v.ang*Vector::Rad_to_deg<<")"<<endl;
	else
		os<<"no this mode("<<v.mode<<")\n";
	return os;
}

}

