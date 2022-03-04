#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
using namespace std;

class Student {

   public:
      Student();
   	void SetName(string n) { name = n; }
   	string GetName() const { return name; }
      void SetGPA(double x) { gpa = x; }
      double GetGPA() const { return gpa; }
   	 
   private:
      string name;
      double gpa;
};

#endif /* STUDENT_H_ */