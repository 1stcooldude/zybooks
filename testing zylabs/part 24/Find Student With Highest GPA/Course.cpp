#include <iostream>
#include "Course.h"
using namespace std;

Student Course::FindStudentHighestGpa() {
   double max = 0;
   int pos;
   for (int i = 0; i < roster.size(); i++){
      if (roster.at(i).GetGPA() > max){
         max = roster.at(i).GetGPA();
         pos = i;
      }
   }
   return roster.at(pos);
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}