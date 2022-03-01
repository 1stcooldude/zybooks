#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText; 
   string cleanedText = ""; 
   int pos1 = 0, pos2;
   
   
   getline(cin, userText); 

   for (int i = 0; i < userText.size(); i++){
      if (!isspace(userText.at(i))){
         pos1 = i;
         break;
      }
   }

   for (int i = userText.size()-1; i >= 0; i--){
      if (!isspace(userText.at(i))){
         pos2 = i;
         break;
      }
   }

   if (userText.size() == 0){}
   else if (pos1 == 0 && isspace(userText.at(0))){}
   else {
      cleanedText = userText.substr(pos1, pos2-pos1+1);
         
      cout << cleanedText << endl;
   }

   return 0;
}