#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> listNums;
   unsigned int currNum;
   int tmp;
   
   while (cin >> currNum) {
      listNums.push_back(currNum);
   }
   
   
   int listSize = listNums.size();
   for (int i = 0; i < listSize/2; i++){
      tmp = listNums.at(i);
      listNums.at(i) = listNums.at(listSize - i - 1);
      listNums.at(listSize - i - 1) = tmp;
   }
   
   

   for (int i = 0; i < listSize; ++i) {
      cout << listNums.at(i) << " ";
   }
   cout << endl;

   return 0;
}