#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> listInts(6); 
   vector<int> listNegInts;
   unsigned int i;
   
   // Get input integers
   for (i = 0; i < 6; ++i) {
      cin >> listInts.at(i);
   }

   for (i = 0; i < 6; ++i) {
      if (listInts.at(i) < 0){
         listNegInts.push_back(listInts.at(i));
      }
   }

   cout << listNegInts.size() << endl;
   for (int item : listNegInts){
      cout << item << endl;
   }

   return 0;
}