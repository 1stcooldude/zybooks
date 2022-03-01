#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

   vector<int> list;
   int input = 0;
   int count = 0;

   cin >> input;
   while (input >= 0){
      count++;
      if (count == 10){
         break;
      }
      list.push_back(input);
      cin >> input;
   }

   if (count == 10){
      cout << "Too many numbers" << endl;
   } else {
      cout << "Middle item: " << list.at(list.size()/2) << endl;
   }



   return 0;
}
