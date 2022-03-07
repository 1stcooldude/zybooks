#include <iostream>
using namespace std;

int main() {

   string name;
   string location;
   int number;
   string pluralNoun;
   
   cin >> name >> location >> number >> pluralNoun; 
   
   cout << name << " went to " << location << " to buy " << number << " different types of " << pluralNoun << "." << endl;

   return 0;
}