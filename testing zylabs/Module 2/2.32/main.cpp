#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   
   const double r = pow(2, (1.0 / 12.0));
   double frequency;
   
   cin >> frequency;
   
   cout << fixed << setprecision(2);
   cout << frequency * pow(r, 0) << " ";
   cout << frequency * pow(r, 1) << " ";
   cout << frequency * pow(r, 2) << " ";
   cout << frequency * pow(r, 3) << " ";
   cout << frequency * pow(r, 4) << endl;

   return 0;
}
