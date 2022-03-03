#include <iostream>
#include <string>
#include <vector>
using namespace std;

void OutputGuitarTabs(vector<char> tabs){
   vector<string> chords(6);
   chords.at(0) = "e|-";
   chords.at(1) = "B|-";
   chords.at(2) = "G|-";
   chords.at(3) = "D|-";
   chords.at(4) = "A|-";
   chords.at(5) = "E|-";
   for (char tab: tabs){
      switch (tab){
         case ('G'):
            chords.at(0) += "3-";
            chords.at(1) += "0-";
            chords.at(2) += "0-";
            chords.at(3) += "0-";
            chords.at(4) += "2-";
            chords.at(5) += "3-";
            break;
         case ('C'):
            chords.at(0) += "0-";
            chords.at(1) += "1-";
            chords.at(2) += "0-";
            chords.at(3) += "2-";
            chords.at(4) += "3-";
            chords.at(5) += "--";
            break;
         case ('D'):
            chords.at(0) += "2-";
            chords.at(1) += "3-";
            chords.at(2) += "2-";
            chords.at(3) += "0-";
            chords.at(4) += "--";
            chords.at(5) += "--";
            break;
      }
   }
   for (string chord : chords){
      cout << chord << endl;
   }
}

int main() {

   vector<char> tabs;
   int size;

   cin >> size;

   tabs.resize(size);

   for (int i = 0; i < size; i++){
      cin >> tabs.at(i);
   }

   OutputGuitarTabs(tabs);

   return 0;
}