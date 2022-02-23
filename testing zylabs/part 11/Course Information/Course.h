#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
   private:
      string courseNumber;
      string courseTitle;

   public:
      void SetCourseNumber(string courseNumber);
      void SetCourseTitle(string courseTitle);

      string GetCourseNumber();
      string GetCourseTitle();

      void PrintInfo();

};

#endif
