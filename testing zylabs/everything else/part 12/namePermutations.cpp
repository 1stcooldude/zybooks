#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   vector<string> remaining = permList;
   vector<string> done = nameList;
   if (remaining.size() == 0){
      for (int i = 0; i < done.size(); i++){
         cout << done.at(i);
      }
      cout << remaining.at(0) << endl;
   } else {
      for (int i = 0; i < remaining.size(); i++){
         done.push_back((remaining.at(i) + ", "));
         remaining.erase(remaining.begin() + i);
         PrintAllPermutations(remaining, done);
         remaining = permList;
         done = nameList;
      }
   }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   cin >> name;

   while (name != "-1"){
      permList.push_back(name);
      cin >> name;
   }

   PrintAllPermutations(permList, nameList);
   
   return 0;
}