#include <iostream>
#include "Course.h"
using namespace std;

int Course::CountProbation() {
   int count = 0;
	for (auto x : roster){
      if (x.GetGPA() < 2.0){
         count++;
      }
   }
   return count;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}