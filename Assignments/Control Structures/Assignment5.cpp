#include <iostream>
#include <cmath>

using namespace std;

int main(){
   bool isPrime;
   int count = 0;

   cout << "1";

   for (int i = 2; i <= 100; i++){
      isPrime = true;
      for (int j = 2; j <= sqrt(i); j++){
         if (i % j == 0){
            isPrime = false;
            break;
         }
      }
      if (isPrime){
         cout << ", " << i;
         count++;
      }
   }
   cout << endl;
   cout << count << endl;
}