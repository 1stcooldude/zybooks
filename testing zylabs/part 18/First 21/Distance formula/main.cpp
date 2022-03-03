#include <iostream>
#include <cmath>
using namespace std;

int main() {

   char temp;
   double x1, x2, y1, y2;
   double distance;

   cin >> temp >> x1 >> temp >> y1 >> temp >> temp >> x2 >> temp >> y2;

   distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
 
   cout << distance << endl;

   return 0;
}