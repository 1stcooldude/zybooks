#include "Team.h"


void Team::SetTeamName(string teamName){
   this->teamName = teamName;
}

void Team::SetTeamWins(int teamWins){
   this->teamWins = teamWins;
}

void Team::SetTeamLosses(int teamLosses){
   this->teamLosses = teamLosses;
}


string Team::GetTeamName() const{
   return teamName;
}

int Team::GetTeamWins() const{
   return teamWins;
}

int Team::GetTeamLosses() const{
   return teamLosses;
}


double Team::GetWinPercentage() const{
   return teamWins / (static_cast<double>(teamWins) + teamLosses);
}