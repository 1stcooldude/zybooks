#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   double percentage;
   
   cin >> percentage;

   if (percentage > 100){
      cout << fixed << setprecision(2);
      cout << percentage / 100 << endl;
   } else {
      cout << fixed << setprecision(0);
      cout << "." << percentage << endl;
   }

   return 0;
}