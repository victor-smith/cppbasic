#include <cpph.h>
#include "dma.h"


BaseDMA::BaseDMA(const char* i, int r )
{
	label = new char[strlen(i)+1];
	strcpy(label, i);
	rating = r;
}

BaseDMA::BaseDMA(const BaseDMA &rs)
{
	label = new char[strlen(rs.label)+1];
	strcpy(label, rs.label);
	rating = rs.rating;
}

BaseDMA::~BaseDMA()
{
	delete [] label;
}

BaseDMA & BaseDMA::operator = (const BaseDMA &rs)
{
	if(this == &rs)
		return *this;

	delete [] label;
	label = new char[strlen(rs.label)+1];
	strcpy(label, rs.label);
	rating = rs.rating;
	
	return *this;
}

ostream & operator<<(ostream& os, const BaseDMA &rs)
{
	os<<"Label:"<<rs.label<<endl;
	os<<"Rating:"<<rs.rating<<endl;
	return os;
}

LacksDMA::LacksDMA(const char *c, const char *l, int r):BaseDMA(l, r)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

LacksDMA::LacksDMA(const char *c, const BaseDMA &rs):BaseDMA(rs)
{
	strncpy(color, c, 39);
	color[39] = '\0';
}

ostream & operator <<(ostream &os, const LacksDMA &ld)
{
	os<<(const BaseDMA &)ld;	
	os<<"color:"<<ld.color<<endl;
	return os;
}

HasDMA::HasDMA(const char*s, const char *l, int r):BaseDMA(l,r)
{
	style = new char [strlen(s)+1];
	strcpy(style, s);
}

HasDMA::HasDMA(const char* s, const BaseDMA &rs):BaseDMA(rs)
{
	style = new char [strlen(s)+1];
	strcpy(style, s);
}
HasDMA::~HasDMA()
{
	delete [] style;
}

HasDMA & HasDMA::operator=(const HasDMA &rs)
{
	if(this == &rs)
		return *this;

	delete [] style;
	BaseDMA::operator = (rs);
	style= new char[strlen(rs.style)+1];
	strcpy(style, rs.style);
	
	return *this;
}

ostream & operator<<(ostream &os, const HasDMA &rs)
{
	os<<(const BaseDMA&) rs;
	os<<"style:"<<rs.style<<endl;
	return os;
}

