#include <iostream>
using namespace std;

string CheckCharacter(string word, int index) {
	char c = word.at(index);
   string x = string(1 , c);
   string result = "Character '" + x + "' is ";
   if (isalpha(c)){
      result += "a letter";
   } else if (isdigit(c)){
      result += "a digit";
   } else if (isspace(c)){
      result += "a whitespace";
   } else {
      result += "unknown";
   }
   return result;
}

int main() {
	cout << CheckCharacter("happy birthday", 2) << endl;
	cout << CheckCharacter("happy birthday", 5) << endl;
	cout << CheckCharacter("happy birthday 2 you", 15) << endl;
	cout << CheckCharacter("happy birthday!", 14) << endl;

	return 0;
}