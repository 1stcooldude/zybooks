#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> list;
   int size, threshold;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   cin >> threshold;

   for (int i = 0; i < size; i++){
      if (list.at(i) <= threshold){
         cout << list.at(i) << ",";
      }
   }
   cout << endl;

   return 0;
}
