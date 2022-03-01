#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   private:
      string teamName;
      int teamWins;
      int teamLosses;

   // TODO: Declare private data members - teamName, teamWins, teamLosses
   
   public:
      void SetTeamName(string teamName);
      void SetTeamWins(int teamWins);
      void SetTeamLosses(int teamLosses);

      string GetTeamName() const;
      int GetTeamWins() const;
      int GetTeamLosses() const;

      double GetWinPercentage() const;
   
   // TODO: Declare mutator functions - 
   //       SetTeamName(), SetTeamWins(), SetTeamLosses()
   
   // TODO: Declare accessor functions - 
   //       GetTeamName(), GetTeamWins(), GetTeamLosses()
   
   // TODO: Declare GetWinPercentage()
};

#endif