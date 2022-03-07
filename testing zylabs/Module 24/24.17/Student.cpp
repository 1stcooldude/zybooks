#include "Student.h"

using namespace std;

Student::Student(string f, string l, double g) {
	first = f; // first name
	last = l;  // last name
	gpa = g;   // grade point average
}

double Student::GetGPA() {
	return gpa;
}

string Student::GetFirst() {
	return first;
}

string Student::GetLast() {
	return last;
}