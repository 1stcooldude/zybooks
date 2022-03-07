#include "OfferedCourse.h"

void OfferedCourse::SetInstructorName(string instructorName){
   this->instructorName = instructorName;
}

void OfferedCourse::SetTerm(string term){
   this->term = term;
}

void OfferedCourse::SetClassTime(string classTime){
   this->classTime = classTime;
}


string OfferedCourse::GetInstructorName(){
   return instructorName;
}

string OfferedCourse::GetTerm(){
   return term;
}

string OfferedCourse::GetClassTime(){
   return classTime;
}