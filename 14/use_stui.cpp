/*
 * use_stui.cpp
 *
 *  Created on: 2020年9月8日
 *      Author: jerray
 */

#include "studenti.h"
using namespace std;

void set(Student &stu, int n);
const int pupils = 3;
const int quizzes = 5;

int main() {
	Student ada[pupils] =
			{ Student(quizzes), Student(quizzes), Student(quizzes) };
	int i;
	for (i = 0; i < pupils; ++i)
		set(ada[i], quizzes);

	cout << "\nStudent List:" << endl;
	for (auto item : ada) {
		cout <<endl<< item << endl;
		cout << "Average: " << item.Average() << endl;
	}
	cout << "Done" << endl;
	return 0;
}

void set(Student &stu, int n) {
	cout << "Please input the student's name:";
	getline(cin, stu);
	cout << "Please enter " << n << " quize scores:\n";
	for (int i = 0; i < n; i++) {
		cin >> stu[i];
	}
	while (cin.get() != '\n')
		continue;
}


