#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<string> words;
   vector<string> rightWords;
   char compare;
   int size;

   cin >> size;

   words.resize(size);

   for (int i = 0; i < size; i++){
      cin >> words.at(i);
   }

   cin >> compare;

   for (int i = 0; i < size; i++){
      for (int j = 0; j < words.at(i).size(); j++){
         if (words.at(i).at(j) == compare){
            rightWords.push_back(words.at(i));
            break;
         }
      }
   }

   for (int i = 0; i < rightWords.size(); i++){
      cout << rightWords.at(i) << ",";
   }

   return 0;
}
