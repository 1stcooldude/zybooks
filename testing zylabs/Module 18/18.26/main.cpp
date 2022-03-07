#include <iostream>
#include <cmath>
using namespace std;

int main() {

   double input;
   double height;
   double width;

   cin >> input;

   for (int i = 0; i < input; i++){
      width = i*1.0;
      height = sqrt(pow(input, 2) - pow(width, 2));
      if (width > height){
         cout << width << " " << height << endl;
      }
   }

   return 0;
}