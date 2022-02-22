#include "PlaylistNode.h"
#include <iostream>

PlaylistNode::PlaylistNode(){
   uniqueID = "none";
   songName = "none";
   artistName = "none";
   songLength = 0;
   nextNodePtr = 0;
}

PlaylistNode::PlaylistNode(string id, string song, string artist, int length){
   uniqueID = id;
   songName = song;
   artistName = artist;
   songLength = length;
   nextNodePtr = 0;
}

void PlaylistNode::InsertAfter(PlaylistNode* playlistNode){
   PlaylistNode* temp;

   temp = nextNodePtr;
   nextNodePtr = playlistNode;
   playlistNode->nextNodePtr = temp;
}

void PlaylistNode::SetNext(PlaylistNode* playlistNode){
   nextNodePtr = playlistNode;
}

void PlaylistNode::PrintPlaylistNode(){
   cout << "Unique ID: " << uniqueID << endl;
   cout << "Song Name: " << songName << endl;
   cout << "Artist Name: " << artistName << endl;
   cout << "Song Length (in seconds): " << songLength << endl;
}