#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
   private:
      string instructorName;
      string term;
      string classTime;

   public:
      void SetInstructorName(string instructorName);
      void SetTerm(string term);
      void SetClassTime(string classTime);

      string GetInstructorName();
      string GetTerm();
      string GetClassTime();


};

#endif