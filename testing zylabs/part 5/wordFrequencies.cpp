#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   vector<string> words;
   vector<int> frequencies;
   int size, wordCount;

   cin >> size;

   words.resize(size);
   frequencies.resize(size);

   for (int i = 0; i < size; i++){
      cin >> words.at(i);
   }

   for (int i = 0; i < size; i++){
      wordCount = 0;
      for (int j = 0; j < size; j++){
         if (words.at(i) == words.at(j)){
            wordCount++;
         }
      }
      frequencies.at(i) = wordCount;
   }

   for (int i = 0; i < size; i++){
      cout << words.at(i) << " - " << frequencies.at(i) << endl;
   }

   return 0;
}
