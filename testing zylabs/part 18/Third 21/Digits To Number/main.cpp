#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int DigitsToNum(vector<int> digitsList){
   int number = 0;
   for (int i = 0; i < digitsList.size(); i++){
      number += digitsList.at(i) * pow(10, i);
   }
   return number;
}


int main() {
   int userDigit;
   vector<int> digitsList; 
   int resultNum;
   
   while (cin >> userDigit) {
      digitsList.push_back(userDigit);
   }
   
   resultNum = DigitsToNum(digitsList);
   
   cout << resultNum << endl;

   return 0;
}