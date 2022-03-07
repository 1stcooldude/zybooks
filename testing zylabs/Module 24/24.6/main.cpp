#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main() {
   Course course;
   int probCount;
   
   // Example students for testing
   course.AddStudent(Student("Henry", "Cabot", 3.2));   
   course.AddStudent(Student("Brenda", "Stern", 1.1)); 
   course.AddStudent(Student("Lynda", "Robison", 2.4)); 
   course.AddStudent(Student("Jane", "Flynn", 1.8)); 

	probCount = course.CountProbation();
	cout << "Probation count: " << probCount << endl;

   return 0;
}