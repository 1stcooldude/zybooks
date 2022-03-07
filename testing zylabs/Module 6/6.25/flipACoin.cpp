#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails();

int main() {
   int numFlips;
   
   srand(2);  

   cin >> numFlips;

   for (int i = 0; i < numFlips; i++){
      cout << HeadsOrTails() << endl;
   }

   return 0;
}

string HeadsOrTails(){
   int chance = rand() % 2;
   if (chance == 0){
      return "heads";
   } else {
      return "tails";
   }
}
