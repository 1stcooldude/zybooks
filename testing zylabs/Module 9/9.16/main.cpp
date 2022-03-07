#include "SongNode.h"

void PrintPlaylist(SongNode* headNode){
   SongNode* lastNode = headNode;
   SongNode* currNode;
   while (lastNode->GetNext() != NULL){
      currNode = lastNode->GetNext();
      currNode->PrintSongInfo();
      lastNode = currNode;
      if (lastNode->GetNext() == NULL){
         break;
      }
      cout << endl;
   }
}

int main() {
	SongNode* headNode;
	SongNode* currNode;
	SongNode* lastNode;

	string songTitle;
	string songLength;
	string songArtist;

	// Front of nodes list                                                                         
	headNode = new SongNode();
	lastNode = headNode;

	// Read user input until -1  entered
	getline(cin, songTitle);
	while (songTitle != "-1") {
		getline(cin, songLength);
		getline(cin, songArtist);

		currNode = new SongNode(songTitle, songLength, songArtist);
		lastNode->InsertAfter(currNode);
		lastNode = currNode;

		getline(cin, songTitle);
	}

	// Print linked list
	cout << "LIST OF SONGS" << endl;
	cout << "-------------" << endl;
	PrintPlaylist(headNode);
}

