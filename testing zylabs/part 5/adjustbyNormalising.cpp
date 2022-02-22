#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

   vector<double> list;
   int size;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   int max = list.at(0);
   for (int i = 0; i < size; i++){
      if (list.at(i) > max){
         max = list.at(i);
      }
   }

   cout << fixed << setprecision(2);

   for (int i = 0; i < size; i++){
      list.at(i) /= max;
      cout << list.at(i) << " ";
   }

   cout << endl;


   return 0;
}
