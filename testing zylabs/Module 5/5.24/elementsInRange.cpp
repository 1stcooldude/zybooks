#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> list;
   vector<int> inRange;
   int size;
   int upper;
   int lower;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   cin >> lower >> upper;

   for (int i = 0; i < size; i++){
      if (list.at(i) < lower || list.at(i) > upper){
         continue;
      }
      inRange.push_back(list.at(i));
   }

   for (int i = 0; i < inRange.size(); i++){
      cout << inRange.at(i) << ",";
   }

   cout << endl;

   return 0;
}
