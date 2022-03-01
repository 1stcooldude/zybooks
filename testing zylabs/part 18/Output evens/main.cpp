#include <iostream>
using namespace std;

int main() {
   int n;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   if (n < 0){
      n = 0;
   } else if (n % 2 == 1){
      n--;
   }
   for (int i = n; i >= 0; i -= 2){
      cout << i << " ";
   }
   cout << endl;

   return 0;
}