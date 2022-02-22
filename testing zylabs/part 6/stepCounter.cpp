#include <iostream>
#include <iomanip>
using namespace std;

int FeetToSteps(double feet);

int main() {
   double feet;

   cin >> feet;

   cout << FeetToSteps(feet) << endl;

   return 0;
}


int FeetToSteps(double feet){
   return feet / 2.5;
}