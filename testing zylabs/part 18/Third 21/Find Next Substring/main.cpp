#include <iostream>
#include <string>
using namespace std;

int FindNextSubstr(string inputString, int startIndex, string searchStr){
   string search;
   for (int i = startIndex; i < inputString.size()-searchStr.size()+1; i++){
      search = "";
      for (int j = i; j < searchStr.size()+i; j++){
         search += inputString.at(j);
      }
      if (search == searchStr){
         return i;
      }
   }
   return -1;
}

   
int main() {
   string inputString;
   int startIndex;
   string searchStr;
   
   cin >> inputString;
   cin >> startIndex;
   cin >> searchStr;
   
   cout << FindNextSubstr(inputString, startIndex, searchStr) << endl;

   return 0;
}