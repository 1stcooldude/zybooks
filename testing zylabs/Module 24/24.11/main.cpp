#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main() {
   Course course;
   int count;
   
   course.AddStudent(Student("Henry", "Bendel", 3.6));   
   course.AddStudent(Student("Johnny", "Min", 2.9)); 

	count = course.CourseSize();
	cout << "Course size: " << count << endl;

   return 0;
}