#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> bowls(21);
   vector<int> bowlingScore(11);
   int turn = 1;
   int score;

   for (int i = 0; i < 21; i++){
      cin >> bowls.at(i);
   }

   bowlingScore.at(0) = 0;

   for (int i = 0; turn < 11; i++){
      if (turn == 10){
         if (bowls.at(i) == 10 || bowls.at(i) + bowls.at(i+1) == 10){
            bowlingScore.at(turn) = bowlingScore.at(turn-1) + bowls.at(i) + bowls.at(i+1) + bowls.at(i+2);
            break;
         } else {
            bowlingScore.at(turn) = bowlingScore.at(turn-1) + bowls.at(i) + bowls.at(i+1);
            break;
         }
      }
      if (bowls.at(i) == 10){
         bowlingScore.at(turn) = bowlingScore.at(turn-1) + bowls.at(i) + bowls.at(i+1) + bowls.at(i+2);
         turn++;
      } else if (bowls.at(i) + bowls.at(i+1) == 10){
         bowlingScore.at(turn) = bowlingScore.at(turn-1)+ bowls.at(i) + bowls.at(i+1) + bowls.at(i+2);
         turn++;
         i++;
      } else {
         bowlingScore.at(turn) = bowlingScore.at(turn-1) + bowls.at(i) + bowls.at(i+1);
         turn++;
         i++;
      }
   }

   for (int i = 1; i < 11; i++){
      cout << bowlingScore.at(i) << " ";
   }
   cout << endl;

   return 0;
}