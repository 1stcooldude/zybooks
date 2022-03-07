#include "Course.h"
#include "Student.h"

using namespace std;

void Course::PrintRoster(){
   for (Student student : roster){
      cout << student.GetFirst() << " " << student.GetLast() << " (GPA: " << student.GetGPA() << ")" << endl;
   }
   cout << "Students: " << roster.size() << endl;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}