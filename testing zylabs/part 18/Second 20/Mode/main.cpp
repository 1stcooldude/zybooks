#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
   vector<int> userValues(10);
   int i;
   map<int, int> total;
   bool inRange = true;
   int badRange;
   
   for (i = 0; i < 10; ++i) {
      cin >> userValues.at(i);
   }

   for (i = 0; i < 10; i++){
      if (userValues.at(i) < 0 || userValues.at(i) > 99){
         inRange = false;
         badRange = userValues.at(i);
         break;
      }
      if (total.find(userValues.at(i)) == total.end()){
         total.emplace(userValues.at(i), 1);
      } else {
         total.at(userValues.at(i))++;
      }
   }
   
   if (!inRange){
      cout << "Invalid input: " << badRange << " is not in 0-99" << endl;
   } else {
      int max = 0;
      int value;
      for (auto item : total){
         if (item.second > max){
            max = item.second;
            value = item.first;
         }
      }

      cout << value << " " << max << endl;
   }

   return 0;
}