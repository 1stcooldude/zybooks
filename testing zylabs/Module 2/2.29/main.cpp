#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;


   cin >> x >> y >> z;
   
   cout << pow(x, z) << " " ;
   cout << pow(x, pow(y, z)) << " ";
   cout << fabs(y) << " ";
   cout << sqrt(pow((x * y), z)) << endl;
   /* Type your code here. Note: Include the math library above first. */

   return 0;
}
