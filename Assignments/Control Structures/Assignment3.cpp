#include <iostream>

using namespace std;

int main(){
   int original;
   int palindrome = 0;

   cout << "Enter a number: ";

   cin >> original;

   int temp = original;
   while(temp > 0){
      palindrome *= 10;
      palindrome += temp % 10;
      temp /= 10;
   }

   if (palindrome == original){
      cout << original << " is a palindrome" << endl;
   } else {
      cout << original << " is not a palindrome" << endl;
   }
}