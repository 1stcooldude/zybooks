#include <iostream>
using namespace std;

int main() {

   double currGrade;

   cin >> currGrade;

   double currPercentage = currGrade / 100 * 60;
   double needed = 90 - currPercentage;
   double score = needed / 40 * 100;

   cout << score << "%" << endl;

   return 0;
}