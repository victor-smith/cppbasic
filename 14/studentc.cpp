/*
 * studentc.cpp
 *
 *  Created on: 2020年9月7日
 *      Author: jerray
 */
#include "studentc.h"
using namespace std;

double Student::Average() const
{
	if(scores.size()==0)
		return 0;
	return scores.sum()/scores.size();
}

const string & Student::Name() const
{
	return name;
}

const double & Student::operator [](int i) const
{
	return scores[i];
}

double & Student::operator [](int i)
{
	return scores[i];
}

ostream & Student::arr_out(ostream &out) const
{
	int i;
	int lim = scores.size();
	if(lim > 0)
	{
		for(i=0; i<lim; i++)
		{
			out<<scores[i]<<" ";
			if(i%5 == 4)
				out<<endl;
		}
		if(i%5 != 0)
			out<<endl;
	}
	else
		out<<"empty scores array"<<endl;
	return out;
}

istream & operator >>(istream & is, Student & stu)
{
	is>>stu.name;
	return is;
}

ostream & operator << (ostream &os, const Student & stu)
{
	os<<"Scores for "<<stu.name<<endl;
	stu.arr_out(os);
	return os;
}

istream & getline(istream &is, Student &stu)
{
	getline(is, stu.name);
	return is;
}
