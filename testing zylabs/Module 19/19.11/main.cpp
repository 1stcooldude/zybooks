#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   double a, b, c;
   double s, area;

   cin >> a >> b >> c;

   s = (a + b + c)/2;
   area = sqrt(s * (s-a) * (s-b) * (s-c));

   cout << fixed << setprecision(3);
   cout << "The area of the triangle is: " << area << endl;

   return 0;
}
