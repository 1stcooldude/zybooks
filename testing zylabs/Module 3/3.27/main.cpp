#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName;
   string middleName;
   string lastName;
   
   cin >> firstName >> middleName >> lastName;
   
   if (lastName == ""){
      lastName = middleName;
      cout << lastName << ", " << firstName.at(0) << "." << endl;
   } else {
      cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;
   }

   return 0;
}