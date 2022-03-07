#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   if (nameList.size() == 0) {
      for (int i = 0; i < permList.size()-1; i++) {
         cout << permList[i] << ", ";
      }
      cout << permList[permList.size()-1] << endl;
   }
   else {
      for (int i = 0; i < nameList.size(); i++) {
         vector<string> newPerm;
         for (int j = 0; j < permList.size(); j++) {
            newPerm.push_back(permList[j]);
         }
         vector<string> newName;
         for (int j = 0; j < nameList.size(); j++) {
            newName.push_back(nameList[j]);
         }
         
         newPerm.push_back(newName[i]);
         newName.erase(newName.begin() + i);
         PrintAllPermutations(newPerm, newName);
      }
   }
   
}

int main(int argc, char* argv[]) {
   vector<string> nameList;
   vector<string> permList;
   string name;

   cin >> name;
   while (name != "-1") {
      nameList.push_back(name);
      cin >> name;
   }
   PrintAllPermutations(permList, nameList);
   
   return 0;
}