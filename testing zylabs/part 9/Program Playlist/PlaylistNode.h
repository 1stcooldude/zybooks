#include <string>

using namespace std;

class PlaylistNode{
   private:
      string uniqueID;
      string songName;
      string artistName;
      int songLength;
      PlaylistNode* nextNodePtr;

   public:
      PlaylistNode();
      PlaylistNode(string id, string song, string artist, int length);
      void InsertAfter(PlaylistNode* playlistNode);
      void SetNext(PlaylistNode* playlistNode);
      string GetID() const { return uniqueID; }
      string GetSongName() const { return songName; }
      string GetArtistName() const { return artistName; }
      int GetSongLength() const { return songLength; }
      PlaylistNode* GetNext() const { return nextNodePtr; }
      void PrintPlaylistNode();
};