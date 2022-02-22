#include <iostream>
#include <vector>
using namespace std;

int main() {

   const int SIZE = 5;
   vector<int> shirtNumber(SIZE);
   vector<int> rating(SIZE);
   int temp;
   int temp2;
   int pos;

   for (int i = 0; i < SIZE; i++){
      cout << "Enter player " << i+1 << "'s jersey number:" << endl;
      cin >> shirtNumber.at(i);
      cout << "Enter player " << i+1 << "'s rating:" << endl;
      cin >> rating.at(i);
      cout << endl;
   }

   cout << "ROSTER" << endl;
   for (int i = 0; i < SIZE; i++){
      cout << "Player " << i+1 << " -- Jersey number: " << shirtNumber.at(i) << ", Rating: " << rating.at(i) << endl;
   }

   char choice = '0';

   while (choice != 'q'){
      cout << endl;
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl;
      cout << endl;
      cout << "Choose an option:" << endl;
      cin >> choice;

      if (choice == 'o'){
         cout << "ROSTER" << endl;
         for (int i = 0; i < rating.size(); i++){
            cout << "Player " << i+1 << " -- Jersey number: " << shirtNumber.at(i) << ", Rating: " << rating.at(i) << endl;
         }
      }

      if (choice == 'a'){
         cout << "Enter a new player's jersey number:" << endl;
         cin >> temp;
         shirtNumber.push_back(temp);
         cout << "Enter the player's rating:" << endl;
         cin >> temp;
         rating.push_back(temp);
      }

      if (choice == 'd'){
         cout << "Enter a jersey number:" << endl;
         cin >> temp;
         for (int i = 0; i < shirtNumber.size(); i++){
            if (shirtNumber.at(i) == temp){
               pos = i;
               break;
            }
         }
         shirtNumber.erase(shirtNumber.begin()+pos);
         rating.erase(rating.begin()+pos);
      } 

      if (choice == 'u'){
         cout << "Enter a jersey number:" << endl;
         cin >> temp;
         cout << "Enter a new rating for player:" << endl;
         cin >> temp2;
         for (int i = 0; i < rating.size(); i++){
            if (shirtNumber.at(i) == temp){
               rating.at(i) = temp2;
               break;
            }
         }
      }

      if (choice == 'r'){
         cout << "Enter a rating:" << endl;
         cin >> temp;
         cout << endl;
         cout << endl;
         cout << "ABOVE " << temp << endl;
         for (int i = 0; i < rating.size(); i++){
            if (rating.at(i) > temp){
               cout << "Player " << i+1 << " -- Jersey number: " << shirtNumber.at(i) << ", Rating: " << rating.at(i) << endl;
            }
         }
      }


   }



   return 0;
}