#include <iostream>
using namespace std;

int main() {

   int max = 0;
   int count = 0;
   int sum = 0;
   int userInput;
   
   cin >> userInput;
   
   while (userInput >= 0){
      if (userInput > max){
         max = userInput;
      }
      count ++;
      sum += userInput;
      cin >> userInput;
   }
   
   cout << max << " " << sum/count << endl;

   return 0;
}
