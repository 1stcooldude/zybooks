#include <iostream>
#include <vector>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName);

int main() {
   int size;
   vector<string> names;
   vector<string> numbers;
   string name;

   cin >> size;

   names.resize(size);
   numbers.resize(size);

   for (int i = 0; i < size; i++){
      cin >> names.at(i);
      cin >> numbers.at(i);
   }

   cin >> name;

   cout << GetPhoneNumber(names, numbers, name) << endl;

   return 0;
}


string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName){
   for (int i = 0; i < nameVec.size(); i++){
      if (nameVec.at(i) == contactName){
         return phoneNumberVec.at(i);
      }
   }
}