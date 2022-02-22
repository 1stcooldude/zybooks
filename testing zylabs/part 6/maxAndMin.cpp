#include <iostream>
using namespace std;

int LargestNumber(int num1, int num2, int num3);
int SmallestNumber(int num1, int num2, int num3);

int main() {
   int num1, num2, num3;

   cin >> num1 >> num2 >> num3;

   cout << "largest: " << LargestNumber(num1, num2, num3) << endl;
   cout << "smallest: " << SmallestNumber(num1, num2, num3) << endl;

   return 0;
}

int LargestNumber(int num1, int num2, int num3){
   if (num1 > num2){
      if (num1 > num3){
         return num1;
      } else {
         return num3;
      }
   } else {
      if (num2 > num3){
         return num2;
      } else {
         return num3;
      }
   }
}

int SmallestNumber(int num1, int num2, int num3){
if (num1 < num2){
      if (num1 < num3){
         return num1;
      } else {
         return num3;
      }
   } else {
      if (num2 < num3){
         return num2;
      } else {
         return num3;
      }
   }
}