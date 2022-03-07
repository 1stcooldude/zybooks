#include <iostream>
using namespace std;

int main() {

   int low, high, x;

   cin >> low >> high >> x;

   int counter = 0;
   for (int i = low; i <= high; i++){
      if (i % x == 0)
         counter++;
   }

   cout << counter << endl;

   return 0;
}