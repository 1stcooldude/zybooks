#include <iostream>
using namespace std;

int main() {

   int red, green, blue;
   int subtraction;
   
   cin >> red >> green >> blue;
   
   if (red < green){
      if (red < blue){
         subtraction = red;
      } else {
         subtraction = blue;
      }
   } else {
      if (green < blue){
         subtraction = green;
      } else {
         subtraction = blue;
      }
   }
   
   cout << red - subtraction << " " << green - subtraction << " " << blue - subtraction << endl;
         

   return 0;
}
