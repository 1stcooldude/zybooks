#include <iostream>
using namespace std;

int main() {

   int hr;
   string m, min;

   cin >> hr >> min >> m;

   if (m == "pm" && hr != 12){
      cout << hr+12 << ":" << min << endl;
   } else if (m == "am" && hr == 12){
      cout << "00" << ":" << min << endl;
   } else {
      if (hr < 10){
         cout << "0" << hr << ":" << min << endl;
      } else {
         cout << hr << ":" << min << endl;
      }
   }

   return 0;
}