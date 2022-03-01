#include <iostream>
using namespace std;

int main() {

   int degrees;
   string direction;

   cin >> degrees;

   degrees *= 10;

   if (degrees <= 22.5){
      direction = "north";
   } else if (degrees <= 67.5){
      direction = "northeast";
   } else if (degrees <= 112.5){
      direction = "east";
   } else if (degrees <= 157.5){
      direction = "southeast";
   } else if (degrees <= 202.5){
      direction = "south";
   } else if (degrees <= 247.5){
      direction = "southwest";
   } else if (degrees <= 292.5){
      direction = "west";
   } else if (degrees <= 337.5){
      direction = "northwest";
   } else {
      direction = "north";
   }

   cout << degrees << " degrees (" << direction << ")" << endl;

   return 0;
}