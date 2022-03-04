#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "Student.h"

class Course {
   public:
      int CourseSize();  
      void AddStudent(Student s);
   
   private:
      vector<Student> roster; //collection of Student objects
};

#endif