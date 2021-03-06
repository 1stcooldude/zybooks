#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   cin >> caffeineMg;

   caffeineMg /= 2;
   cout << fixed << setprecision(2) << "After 6 hours: " << caffeineMg << " mg" << endl;
   caffeineMg /= 2;
   cout << "After 12 hours: " << caffeineMg << " mg" << endl;
   caffeineMg /= 4;
   cout << "After 24 hours: " << caffeineMg << " mg" << endl;
   

   return 0;
}
