#include <iostream>

using namespace std;

int main(){
   int first = 1;
   int second = 1;
   int count = 0;
   int total;

   cout << "How many fibonacci numbers: ";

   cin >> total;

   cout << first << ", " << second;
   do  {
      if (count++ % 2 == 0){
         first += second;
         cout << ", " << first;
      } else {
         second += first;
         cout << ", " << second;
      }
   } while (count < total-2);
}