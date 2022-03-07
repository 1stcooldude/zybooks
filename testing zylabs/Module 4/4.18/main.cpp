#include <iostream>
#include <string>
using namespace std;

int main() {

   char first;
   string second;
   int count = 0;
   
   cin >> first;
   getline(cin, second);
   
   for (int i = 0; i < second.size(); i++){
      if (first == second.at(i)){
         count++;
      }
   }
   
   if (count == 1){
      cout << "1 " << first << endl;
   } else {
      cout << count << " " << first << "'s" << endl;
   }

   return 0;
}