#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

   cout << fixed << setprecision(2);

   double x, y, z;

   cin >> x >> y;

   z = sqrt(pow(x, 2) + pow(y, 2));

   cout << "Hypotenuse: " << z << endl;

   return 0;
}