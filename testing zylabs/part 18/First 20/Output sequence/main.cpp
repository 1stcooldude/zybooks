#include <iostream>
using namespace std;

int main() {
   int n;

   cout << "Enter an integer:" << endl;
   cin >> n;

   cout << "Sequence: ";
   n = abs(n);

   for (int i = -n; i < n; i++){
      cout << i << " ";
   }
   cout << n << " " << endl;

   return 0;
}
