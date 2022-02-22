#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
   string input;
   const int MAGIC_NUMBER = 5;

   srand(time(0));

   cout << "There are 21 beer bottles... " << endl;
   cout << "There are 2 players - Computer and you." << endl;
   cout << "At a time, each one can pick up any no. of bottles between 1 and " << MAGIC_NUMBER-1 << " (inclusive) " << endl;
   cout << "will you like to play first?" << endl;

   cin >> input;

   int choice;
   int pile = 21;
   bool computerWin = true;
   int optimal;
   if (input == "Yes"){   

      // User goes first

      while (pile > 1){
         cout << "How many you would like to pick up?" << endl;
         cin >> choice;

         while (choice < 1 || choice > (MAGIC_NUMBER -1)){
            cout << "You must choose a different number" << endl;
            cin >> choice;
         }

         cout << "Computer has picked " << MAGIC_NUMBER - choice << endl;
         pile -= MAGIC_NUMBER;
         cout << "The bottles remaining are: " << pile << endl;
      }
      cout << "You will have to pick up the last..you are loser" << endl;



   } else {

      // Computer goes first


      // while the computer cannot get to a winning position

      while (pile % MAGIC_NUMBER == 1 && pile > MAGIC_NUMBER){
         choice = rand() % (MAGIC_NUMBER - 1) + 1;
         cout << "Computer has picked " << choice << endl;
         pile -= choice;
         cout << "The bottles remaining are: " << pile << endl;
         cout << "How many you would like to pick up?" << endl;
         cin >> choice;
         while (pile - choice < 1 || (choice < 1 || choice > (MAGIC_NUMBER -1))){
            cout << "You must choose a different number" << endl;
            cin >> choice;
         }
         pile -= choice;
         if (pile == 1){      // if player has won
            computerWin = false;
         }
         
      } 


      // if the computer can get to a winning position

      if (pile % MAGIC_NUMBER != 1 && computerWin){
         optimal = pile % MAGIC_NUMBER - 1;
         if (optimal == -1){
            optimal = 4;
         }
         cout << "Computer has picked " << optimal << endl;
         pile -= optimal;
         cout << "The bottles remaining are: " << pile << endl;
         while (pile > 1){
            cout << "How many you would like to pick up?" << endl;
            cin >> choice;

            while (choice < 1 || choice > (MAGIC_NUMBER -1)){
               cout << "You must choose a different number" << endl;
               cin >> choice;
            }

            cout << "Computer has picked " << MAGIC_NUMBER - choice << endl;
            pile -= MAGIC_NUMBER;
            cout << "The bottles remaining are: " << pile << endl;
         }

         cout << "You will have to pick up the last..you are loser" << endl;


      // if the computer has lost
      
      } else if (!computerWin){
         cout << "The bottles remaining are: 1" << endl;
         cout << "You have beaten the computer" << endl;
      }
   }



}