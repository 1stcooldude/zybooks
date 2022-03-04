#include <iostream>
using namespace std;

int main() {

   int temp;
   int max;

   cin >> temp;

   max = temp;
   while (temp >= 0){
      if (temp > max){
         max = temp;
      }
      cin >> temp;
   }

   cout << max << endl;

   return 0;
}