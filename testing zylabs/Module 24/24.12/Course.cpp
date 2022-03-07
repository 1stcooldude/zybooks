#include <iostream>
#include "Course.h"
using namespace std;

vector<Student> Course::GetDeansList() {
	vector<Student> deans;
   for (Student student : roster){
      if (student.GetGPA() >= 3.5){
         deans.push_back(student);
      }
   }
   return deans;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}