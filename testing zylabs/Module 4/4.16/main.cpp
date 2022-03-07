#include <iostream>
#include <string>
using namespace std;

int main() {

   string word;
   int number;
   
   cin >> word >> number;
   
   while (word != "quit"){
      cout << "Eating " << number << " " << word << " a day keeps you happy and healthy." << endl;
      cin >> word >> number;
   }

   return 0;
}
