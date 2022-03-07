#include <iostream>
using namespace std;

int main() {
   string userCaption; 
  
   
   getline(cin, userCaption);

   char last = userCaption.at(userCaption.size()-1);

   if (last == '?'){
      cout << userCaption << endl;
   } else if (last == '!'){
      cout << userCaption << endl;
   } else if (last == '.'){
      if (userCaption.size() == 1){
         cout << userCaption << endl;
      } else if (userCaption.at(userCaption.size()-2) == '.'){
         if (userCaption.size() == 2){
            cout << "." << endl;
         } else if (userCaption.at(userCaption.size()-3) == '.'){
            cout << userCaption << endl;
         } else {
            userCaption.pop_back();
            cout << userCaption << endl;
         }
      } else {
         cout << userCaption << endl;
      }
   } else if (last == ','){
      userCaption.pop_back();
      cout << userCaption + "." << endl;
   } else {
      cout << userCaption + "." << endl;
   }

   return 0;
}