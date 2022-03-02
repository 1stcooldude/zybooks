#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> userValues(10);
   int i;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }
   
   int max = userValues.at(0);
   int min = max;
   double average, sum;
   for (int item : userValues){
      if (item > max){
         max = item;
      } else if (item < min){
         min = item;
      }
      sum += item;
   }
   average = sum/10.0;
   cout << min << " " << max << " " << average << endl;
   
   return 0;
}