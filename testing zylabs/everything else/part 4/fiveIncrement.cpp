#include <iostream>
using namespace std;

int main() {

   int first, last;

   cin >> first >> last;

   if (first > last){
      cout << "Second integer can't be less than the first." << endl;
   } else {
      for (int i = first; i <= last; i += 5){
         cout << i << " ";
      }
      cout << endl;
   }


   return 0;
}
