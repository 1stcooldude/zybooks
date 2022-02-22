#include "PlaylistNode.h"
#include <iostream>

void PrintMenu(string title){
   cout << title << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl;
}


int main(){
   PlaylistNode* headNode;
   PlaylistNode* currNode;
   PlaylistNode* lastNode;
   PlaylistNode* tempNode;
   PlaylistNode* currNode2;
   PlaylistNode* tempNode2;
   string title;
   char choice;
   int total = 0;

   headNode = new PlaylistNode();
   lastNode = headNode;

   cout << "Enter playlist's title:" << endl;
   getline(cin, title);
   cout << endl;

   PrintMenu(title);
   cout << endl;
   cout << "Choose an option:" << endl;
   cin >> choice;
   while (choice != 'q'){
      string id, song, artist;
      int length, pos1, pos2, counter;
      switch (choice){
         case ('a'):
            cin.ignore();
            cout << "ADD SONG" << endl;
            cout << "Enter song's unique ID:" << endl;
            getline(cin, id);
            cout << "Enter song's name:" << endl;
            getline(cin, song);
            cout << "Enter artist's name:" << endl;
            getline(cin, artist);
            cout << "Enter song's length (in seconds):" << endl;
            cin >> length;
            currNode = new PlaylistNode(id, song, artist, length);
            lastNode->InsertAfter(currNode);
            lastNode = currNode;
            total++;
            cout << endl;
            break;
         case ('d'):
            cout << "REMOVE SONG" << endl;
            cout << "Enter song's unique ID:" << endl;
            cin >> id;
            currNode = headNode;
            tempNode = headNode;
            while (currNode->GetID() != id){
               tempNode = currNode;
               currNode = currNode->GetNext();
            }
            tempNode->SetNext(currNode->GetNext());
            cout << "\"" << currNode->GetSongName() << "\" removed." << endl;
            delete currNode;
            total--;
            cout << endl;
            break;
         case ('c'):
            cout << "CHANGE POSITION OF SONG" << endl;
            cout << "Enter song's current position:" << endl;
            cin >> pos1;
            cout << "Enter new position for song:" << endl;
            cin >> pos2;
            counter = 1;
            currNode = headNode;
            for (int i = 0; i < pos2; i++){
               tempNode = currNode;
               currNode = currNode->GetNext();
            }
            if (pos2 < 0){
               tempNode->SetNext(currNode->GetNext());
               tempNode = headNode;
               headNode = currNode;
               headNode->SetNext(tempNode);
               cout << "\"" << headNode->GetSongName() << "\" moved to head" << endl;
            } else if (pos2 > total){
               tempNode->SetNext(currNode->GetNext());
               lastNode->SetNext(currNode);
               currNode->SetNext(0);
               cout << "\"" << lastNode->GetSongName() << "\" moved to tail" << endl;
            } else if (pos2 > pos1) {
               currNode = headNode;
               for (int i = 0; i <= pos2; i++){
                  tempNode = currNode;
                  currNode = currNode->GetNext();
               }
               currNode2 = headNode;
               for (int i = 0; i < pos1; i++){
                  tempNode2 = currNode2;
                  currNode2 = currNode2->GetNext();
               }
               tempNode2->SetNext(currNode2->GetNext());
               tempNode->SetNext(currNode2);
               currNode2->SetNext(currNode);
               cout << "\"" << currNode2->GetSongName() << "\" moved to position " << pos2 << endl;
            } else {
               currNode2 = headNode;
               for (int i = 0; i < pos1; i++){
                  tempNode2 = currNode2;
                  currNode2 = currNode2->GetNext();
               }
               tempNode2->SetNext(currNode2->GetNext());
               tempNode->SetNext(currNode2);
               currNode2->SetNext(currNode);
               cout << "\"" << currNode2->GetSongName() << "\" moved to position " << pos2 << endl;
            }
            cout << endl;
            break;
         case ('s'):
            cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
            cout << "Enter artist's name:" << endl;
            cout << endl;
            cin.ignore();
            getline(cin, artist);
            currNode = headNode;
            counter = 1;
            while (currNode->GetNext() != 0){
               currNode = currNode->GetNext();
               if (currNode->GetArtistName() == artist){
                  cout << counter++ << "." << endl;
                  currNode->PrintPlaylistNode();
                  cout << endl;
               } else {
                  counter++;
               }
            }
            break;
         case ('t'):
            cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
            currNode = headNode;
            counter = 0;
            while (currNode->GetNext() != 0){
               currNode = currNode->GetNext();
               counter += currNode->GetSongLength();
            }
            cout << "Total time: " << counter << " seconds" << endl;
            cout << endl;
            break;
         case ('o'):
            cout << title << " - OUTPUT FULL PLAYLIST" << endl;
            if (headNode->GetNext() == 0){
               cout << "Playlist is empty" << endl;
               cout << endl;
            } else {
               currNode = headNode;
               counter = 1;
               while (currNode->GetNext() != 0){
                  currNode = currNode->GetNext();
                  cout << counter++ << "." << endl;
                  currNode->PrintPlaylistNode();
                  cout << endl;
               }
            }
            break;
      }
      PrintMenu(title);
      cout << endl;
      cout << "Choose an option:" << endl;
      cin >> choice;
   }
}