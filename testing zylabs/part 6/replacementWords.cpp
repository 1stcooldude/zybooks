#include <iostream>
#include <vector>
#include <string>
using namespace std;

int FindWordInWordList(vector<string> wordList, string wordToFind);

int main() {
   int size1, size2;
   vector<string> original, replacement, sentence;

   cin >> size1;

   original.resize(size1);
   replacement.resize(size1);

   for (int i = 0; i < size1; i++){
      cin >> original.at(i);
      cin >> replacement.at(i);
   }

   cin >> size2;

   sentence.resize(size2);

   for (int i = 0; i < size2; i++){
      cin >> sentence.at(i);
   }

   

   for (int i = 0; i < size1; i++){
      int pos = FindWordInWordList(sentence, original.at(i));
      while (pos != -1){
         sentence.at(pos) = replacement.at(i);
         pos = FindWordInWordList(sentence, original.at(i));
      }
   }

   for (int i = 0; i < size2; i++){
      cout << sentence.at(i) << " ";
   }

   cout << endl;
      

   return 0;
}

int FindWordInWordList(vector<string> wordList, string wordToFind){
   for (int i = 0; i < wordList.size(); i++){
      if (wordList.at(i) == wordToFind){
         return i;
      }
   }
   return -1;
}

