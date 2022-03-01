#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers
   int size;

   cin >> size;

   userInts.resize(size);

   for (int i = 0; i < size; i++){
      cin >> userInts.at(i);
   }

   for (int i = size-1; i >= 0; i--){
      cout << userInts.at(i) << ",";
   }

   cout << endl;

   return 0;
}