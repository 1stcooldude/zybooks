#include <iostream>

#include "Course.h"
#include "Student.h"
using namespace std;

int main() {

	Course course = Course();

	course.AddStudent(Student("Henry", "Cabot", 3.5));
	course.AddStudent(Student("Brenda", "Stern", 2.1));
	course.AddStudent(Student("Jane", "Flynn", 3.9));
	course.AddStudent(Student("Lynda", "Robison", 3.2));

	course.PrintRoster();

	return 0;
}