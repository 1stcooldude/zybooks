#include <iostream>
using namespace std;

int main() {

   double threshold;
   double testScore;
   double GPA;

   cin >> threshold;

   for (int i = 30; i < 41; i++){
      GPA = i/10.0;
      testScore = ((threshold/100) - 2.5*(GPA/4))*1600;
      cout << GPA << " " << testScore << endl;
   }

   return 0;
}