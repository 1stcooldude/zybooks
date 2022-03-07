#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
#include <vector>

#include "Student.h"
using namespace std;

class Course {
   public:
	   void PrintRoster();
//		string GetCode();
		void AddStudent(Student);

   private:
      vector<Student> roster;
};

#endif /* COURSE_H_ */