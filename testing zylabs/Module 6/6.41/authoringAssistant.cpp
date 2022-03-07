#include <iostream>
#include <string>
using namespace std;

void PrintMenu();
void ExecuteMenu(char choice, string text);
int GetNumOfNonWSCharacters(const string text);
int GetNumOfWords(const string text);
int FindText(string search, string text);
void ReplaceExclamation(string& text);
void ShortenSpace(string& text);

int main() {

   string userInput;
   char choice = 'a';

   cout << "Enter a sample text:" << endl;
   getline(cin, userInput);
   cout << endl;

   cout << "You entered: " << userInput << endl;

   cout << endl;
   
   PrintMenu();
   cout << endl;
   cout << "Choose an option:" << endl;
   cin >> choice;
   
   while (choice != 'q'){
      ExecuteMenu(choice, userInput);
      cout << endl;
      PrintMenu();
      cout << endl;
      cout << "Choose an option:" << endl;
      cin >> choice;
   }

   return 0;
}

void PrintMenu(){
   cout << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char choice, string text){
   string searchString;
   switch (choice){
      case ('c'):
         cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(text) << endl;;
         break;
      case ('w'):
         cout << "Number of words: " << GetNumOfWords(text) << endl;
         break;
      case ('f'):
         cin.ignore();
         cout << "Enter a word or phrase to be found:" << endl;
         getline(cin, searchString);
         cout << "\"" << searchString << "\" instances: " << FindText(searchString, text) << endl;
         break;
      case ('r'):
         ReplaceExclamation(text);
         cout << "Edited text: " << text << endl;
         break;
      case ('s'):
         ShortenSpace(text);
         cout << "Edited text: " << text << endl;
         break;
   }
}

int GetNumOfNonWSCharacters(const string text){
   int total = 0;
   for (int i = 0; i < text.size(); i++){
      if (!isspace(text.at(i))){
         total++;
      }
   }
   return total;
}

int GetNumOfWords(const string text){
   int total = 1;
   char last = text.at(0);
   for (int i = 1; i < text.size(); i++){
      if (isspace(text.at(i)) && !isspace(last)){
         total++;
      }
      last = text.at(i);
   }
   return total;
}

int FindText(string search, string text){
   int count = 0;
   size_t found = text.find(search);
   while (found != string::npos){
      count++;
      found = text.find(search, found+1);
   }
   return count;
}

void ReplaceExclamation(string& text){
   for (int i = 0; i < text.size(); i++){
      if (text.at(i) == '!'){
         text.at(i) = '.';
      }
   }
}

void ShortenSpace(string& text){
   char last = text.at(0);
   for (int i = 1; i < text.size(); i++){
      if (isspace(text.at(i)) && isspace(last)){
         text.erase(text.begin()+i);
         i--;
      } else {
         last = text.at(i);
      }
   }
}


