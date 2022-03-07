#include <iostream>
using namespace std;

#include "Numbers.h"

int main() {
   Numbers test;
   int i;
   string str;
   int seed;
   int size;
   
   seed = 7;
   size = 10;
   test.FillRandomly(seed, size);  // Fill nums with 10 pseudo-random nmubers using seed value 7
   // For example array, produces 677 299 899 871 325 443 586 97 600 153
   for(i = 0; i < size; ++i) { // Print array values
      cout << test.GetNums().at(i) << " "; 
   }
   cout << endl;
   cout << test.FindMax() << endl; // FindMax() should return 899 for example array

   return 0;
}
