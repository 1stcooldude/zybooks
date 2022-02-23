#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
   
   string title;
   string header1, header2;
   string input;
   string stringInput;
   ostringstream outSS;
   istringstream inSS;
   int intInput;
   int pos;
   bool notHappy = true;
   vector<string> authors;
   vector<int> books;

   cout << "Enter a title for the data:" << endl;
   getline(cin, title);

   cout << "You entered: " << title << endl;
   cout << endl;

   cout << "Enter the column 1 header:" << endl;
   getline(cin, header1);
   cout << "You entered: " << header1 << endl;
   cout << endl;

   cout << "Enter the column 2 header:" << endl;
   getline(cin, header2);
   cout << "You entered: " << header2 << endl;


   do {
      do {
         cout << endl;
         intInput = 0;
         cout << "Enter a data point (-1 to stop input):" << endl;
         getline(cin, input);
         if (input == "-1"){
            break;
         }
         pos = input.find(',');
         if (pos == -1){
            cout << "Error: No comma in string." << endl;
            continue;
         } 
         if (input.find(',', pos+1) != -1){
            cout << "Error: Too many commas in input." << endl;
            continue;
         }
         outSS << input.substr(pos+1, input.size()-(pos+1));
         inSS.str(outSS.str());
         outSS.str("");
         inSS >> intInput;
         if (inSS.fail()){
            inSS.clear();
            cout << "Error: Comma not followed by an integer." << endl;
            continue;
         }
         inSS.clear();
         notHappy = false;
         stringInput = input.substr(0, pos);
         cout << "Data string: " << stringInput << endl;
         cout << "Data integer: " << intInput << endl;
         authors.push_back(stringInput);
         books.push_back(intInput);
      } while (notHappy);
   } while (input != "-1");

   cout << endl;
   cout << setw(33) << right << title << endl;
   cout << setw(20) << left  << header1;
   cout << "|";
   cout << setw(23) << right << header2 << endl;
   cout << setw(44) << setfill('-') << "" << endl;
   cout << setfill(' ');
   for (int i = 0; i < books.size(); i++){
      cout << setw(20) << left  << authors.at(i);
      cout << "|";
      cout << setw(23) << right << books.at(i) << endl;
   }
   cout << endl;
   
   int book;

   for (int i = 0; i < books.size(); i++){
      cout << setw(20) << right  << authors.at(i);
      cout << " ";
      for (int j = 0; j < books.at(i); j++){
         cout << "*";
      }
      cout << endl;
   }

   


   
   return 0;
}