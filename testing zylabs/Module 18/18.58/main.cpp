#include <iostream>
using namespace std;

int main() {

   string firstName, middleName, lastName;

   cin >> firstName >> middleName >> lastName;

   cout << lastName << ", " << firstName << " " << middleName.at(0) << "." << endl;

   return 0;
}