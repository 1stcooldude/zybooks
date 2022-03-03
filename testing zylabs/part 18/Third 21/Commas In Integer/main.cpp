#include <iostream>
#include <string>
using namespace std;

string NumToStringWithCommas(int userNum){
   string result = "";
   string number = to_string(userNum);
   int counter = 0;
   for (int i = number.size()-1; i >= 0; i--){
      if (counter % 3 == 0 && counter != 0){
         result = "," + result;
      }
      result = number.at(i) + result;
      counter++;
   }
   return result;

}


int main() {
   int userNum;
   
   cin >> userNum;
   
   cout << NumToStringWithCommas(userNum) << endl;
   
   return 0;
}