#include <iostream>
using namespace std;

int main() {

   int size;
   int temp;

   cin >> size;

   for (int i = 0; i < size-1; i++){
      cin >> temp;
      cout << temp << ", ";
   }
   cin >> temp;
   cout << temp << "." << endl;

   return 0;
}