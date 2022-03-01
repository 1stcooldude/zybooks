#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec);
bool IsVectorOdd(vector<int> myVec);

int main() {
   int size;
   vector<int> list;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < list.size(); i++){
      cin >> list.at(i);
   }

   if (IsVectorEven(list)){
      cout << "all even" << endl;
   } else if (IsVectorOdd(list)){
      cout << "all odd" << endl;
   } else {
      cout << "not even or odd" << endl;
   }

   return 0;
}

bool IsVectorEven(vector<int> myVec){
   for (int i = 0; i < myVec.size(); i++){
      if (myVec.at(i) % 2 == 1){
         return false;
      }
   }
   return true;
}

bool IsVectorOdd(vector<int> myVec){
   for (int i = 0; i < myVec.size(); i++){
      if (myVec.at(i) % 2 == 0){
         return false;
      }
   }
   return true;
}