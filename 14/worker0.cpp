/*
 * worker0.cpp
 *
 *  Created on: 2020年9月14日
 *      Author: jerray
 */

#include "cpph.h"
#include "worker0.h"

Worker::~Worker() {
}

void Worker::Set() {
	cout << "Enter worker's Name:";
	getline(cin, fullname);
	cout << "Enter worker's ID:";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker::Show() const {
	cout << "Name: " << fullname;
	cout << " ID:" << id << endl;
}

void Waiter::Set() {
	Worker::Set();
	cout << "Enter Waiter's panache rating:";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Show() const{
	cout << "Category: waiter" << endl;
	Worker::Show();
	cout << "Panache rating: " << panache << endl;
}

char *Singer::pv[] = { "other", "alto", "contralto", "soprano", "bass",
		"baritone", "tenor" };

void Singer::Set() {
	Worker::Set();
	cout << "Enter number for Singer's vocal range:";
	int i;
	for(i=0; i<vtypes; i++)
	{
		cout<<i<<":"<<pv[i]<<endl;
		if(i%4 == 3)
		{
			cout<<endl;
		}
	}
	if(i%4 != 3)
		cout<<endl;

	while((cin>>voice)&&(voice<0 || voice >= vtypes))
		cout<<"Please enter a value >=0 and <"<<vtypes<<endl;
	while (cin.get() != '\n')
		continue;
}


void Singer::Show() const
{
	cout<<"Category Singer:"<<endl;
	Worker::Show();
	cout<<"Vocal range:"<<pv[voice]<<endl;
}
