#include <iostream>
using namespace std;

int CountEvens(int a, int b, int c, int d){
   int total = 0;
   if (a % 2 == 0){
      total++;
   }
   if (b % 2 == 0){
      total++;
   }
   if (c % 2 == 0){
      total++;
   }
   if (d % 2 == 0){
      total++;
   }
   return total;
}

int main() {
   int result;
   
   result = CountEvens(3, 1, 4, 12);
	cout << "Total evens: " << result << endl; // Expected "Total evens: 2".

   return 0;
}
