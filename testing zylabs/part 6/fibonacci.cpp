#include <iostream>
using namespace std;

int Fibonacci(int n) {
   if (n == 0){
      return 0;
   }
   if (n < 0){
      return -1;
   }
   int first = 0;
   int second = 1;
   int temp;
   for (int i = 1; i < n; i++){
      temp = first + second;
      first = second;
      second = temp;
   } 
   return second;   
   
}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}