/*
 * studenti.h
 *
 *  Created on: 2020年9月8日
 *      Author: jerray
 */

/*
 * studentc.h
 *
 *  Created on: 2020年9月7日
 *      Author: jerray
 */

#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student: private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	std::ostream & arr_out(std::ostream &os) const;
public:
	Student(): std::string("Null String"),ArrayDb(){}
	explicit Student(const std::string &s):std::string(s),ArrayDb(){}
	explicit Student(int  n):std::string("Nully"), ArrayDb(n){}
	Student(const std::string &s, int n): std::string(s),ArrayDb(n){}
	Student(const std::string &s, const ArrayDb &a):std::string(s), ArrayDb(a){}
	Student(const std::string &s, const double *pd, int n):std::string(s), ArrayDb(pd, n){}

	~Student(){}
	double Average() const;
	const std::string &Name() const;
	const double & operator[] (int i) const;
	double & operator[] (int i);

	friend std::istream & operator>>(std::istream &is, Student & stu);
	friend std::istream & getline(std::istream &is, Student &stu);
	friend std::ostream & operator << (std::ostream &os, const Student &stu);
};
#endif





