#include <iostream>
using namespace std;

int main() {

   int size;
   int sum = 0;
   int temp;

   cin >> size;

   while (size > 0){
      for (int i = 0; i < size; i++){
         cin >> temp;
         sum += temp;
      }
      cout << sum << endl;
      sum = 0;
      cin >> size;
   }

   return 0;
}