#include <iostream>
#include <vector>
using namespace std;

int main() {

   int n;
   vector<int> numbers;

   cin >> n;

   int count = 0;
   numbers.push_back(n);
   while (n != 1){
      if (n % 2 == 1){
         n = 3 * n + 1;
      } else {
         n /= 2;
      }      
      numbers.push_back(n);
   }

   for (int i = 0; i < numbers.size()-1; i++){
      cout << numbers.at(i) << '\t';
      if ((i+1) % 10 == 0){
         cout << endl;
      }
   }
   cout << numbers.back() << endl;

   return 0;
}