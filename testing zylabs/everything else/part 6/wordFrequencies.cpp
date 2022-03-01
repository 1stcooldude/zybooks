#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int GetFrequencyOfWord(vector<string> wordsList, string currWord);

int main() {
   vector<string> list;
   int size;

   cin >> size;

   list.resize(size);

   for (int i = 0; i < size; i++){
      cin >> list.at(i);
   }

   for (int i = 0; i < size; i++){
      cout << list.at(i) << " " << GetFrequencyOfWord(list, list.at(i)) << endl;
   }


   return 0;
}

int GetFrequencyOfWord(vector<string> wordsList, string currWord){
   int count = 0;
   for (int i = 0; i < wordsList.size(); i++){
      if (wordsList.at(i) == currWord){
         count++;
      }
   }
   return count;
}