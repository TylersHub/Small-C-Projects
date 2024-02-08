#include <iostream>
#include <string>
#include "ttt_functions.hpp"

// Tic Tac Toe Game

int main(){

  int rounds=0;

  int plyr=1, spots;

  bool over=false;

  bool taken=false;

  char sym;

  std::string rndgame;

  ttt_intro();

  std::cin >> rounds;

  for(int x=1; x<=rounds; x++){

    if(x==rounds)
    {over=true;}

    bool win=false;

    char grid_spots[9]={'1','2','3','4','5','6','7','8','9'};

    rndgame=(rounds==1 || over==true)? "Game":"Round";

    do{

      plyr=(plyr%2)?1:2;

      system("clear");

      if(rounds>1)
      {std::cout << "\nRound " << x << "!\n\n";}
      
      std::cout << "Enter the number to replace it\n\n";

      ttt_grid(grid_spots);

      if(taken==true)
      {std::cout << "\nThat spot is taken already!\n";}

      std::cout << "\nPlayer " << plyr << " pick a spot!\n\n";
      
      std::cin >> spots;

      taken=false;

      sym=(plyr==1)? 'X':'O';

      ttt_spot_replace(grid_spots, sym, spots, taken);

      ttt_end(rndgame, grid_spots, win, plyr, sym);

      plyr++;

      if(taken==true)
      {plyr--;}

      }while (win==false);

    std::cout << "\n";
    ttt_grid(grid_spots);

    if(over==false)
    {
      fgetc(stdin);
      std::cout << "\nPress Enter to continue to the next round...\n";
      std::cin.ignore();
    }
  }
  
  return 0;
}