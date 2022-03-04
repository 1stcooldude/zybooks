#include <iostream>
#include "Course.h"
using namespace std;

int Course::CourseSize() {
	return roster.size();
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}