#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>

using namespace std;

class Student {
    public:
	   Student(string, string, double);
		double GetGPA();
		string GetFirst();
		string GetLast();

    private:
        string first;
        string last;
        double gpa;
};

#endif /* STUDENT_H_ */