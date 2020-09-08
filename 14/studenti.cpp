/*
 * studenti.cpp
 *
 *  Created on: 2020年9月8日
 *      Author: jerray
 */
#include "studenti.h"
using namespace std;

double Student::Average() const
{
	if(ArrayDb::size()==0)
		return 0;
	else
		return ArrayDb::sum()/ArrayDb::size();
}

const string & Student::Name() const
{
	return (const string &) *this;
}

const double & Student::operator [](int i) const
{
	return ArrayDb::operator[](i);
}

double & Student::operator [](int i)
{
	return ArrayDb::operator[](i);
}

ostream & Student::arr_out(ostream &out) const
{
	int i;
	int lim = ArrayDb::size();
	if(lim > 0)
	{
		for(i=0; i<lim; i++)
		{
			out<<ArrayDb::operator[](i)<<" ";
			if(i%4 == 0)
				out<<endl;
		}
	}
	else
		out<<"empty scores array"<<endl;
	return out;
}

istream & operator >> (istream & is, Student & stu)
{
	is>>(string &)stu;
	return is;
}

ostream & operator << (ostream &os, const Student& stu)
{
	os<<"Scores for "<<(string&)stu<<endl;
	stu.arr_out(os);
	return os;
}

istream & getline(istream &is, Student &stu)
{
	getline(is, (string &)stu);
	return is;
}



