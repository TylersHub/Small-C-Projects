#include <iostream>

//Function Definitions

void ttt_intro(){
  std::cout << "=======================\n";
  std::cout << "Welcome to Tic Tac Toe!\n";
  std::cout << "=======================\n\n";

  std::cout << "Player 1 is 'X' and Player 2 is 'O'\n\n";
  
  std::cout << "How many rounds would you like to go?\n\n";
}


void ttt_grid(char grid_pos[])
{

  std::cout << "     |     |     \n";
  std::cout << "  " << grid_pos[0] << "  |  " << grid_pos[1] << "  |  " << grid_pos[2] << "  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  " << grid_pos[3] << "  |  " << grid_pos[4] << "  |  " << grid_pos[5] << "  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  " << grid_pos[6] << "  |  " << grid_pos[7] << "  |  " << grid_pos[8] << "  \n";
  std::cout << "     |     |     \n";
  
}

void ttt_spot_replace(char grid_pos[], char s, int spt, bool& t)
{
  if(spt==1 && grid_pos[0]=='1')
  {grid_pos[0]=s;}
  else if(spt==2 && grid_pos[1]=='2')
  {grid_pos[1]=s;}
  else if(spt==3 && grid_pos[2]=='3')
  {grid_pos[2]=s;}
  else if(spt==4 && grid_pos[3]=='4')
  {grid_pos[3]=s;}
  else if(spt==5 && grid_pos[4]=='5')
  {grid_pos[4]=s;}
  else if(spt==6 && grid_pos[5]=='6')
  {grid_pos[5]=s;}
  else if(spt==7 && grid_pos[6]=='7')
  {grid_pos[6]=s;}
  else if(spt==8 && grid_pos[7]=='8')
  {grid_pos[7]=s;}
  else if(spt==9 && grid_pos[8]=='9')
  {grid_pos[8]=s;}
  else
  {t=true;}
}

void ttt_end(std::string r_g, const char grid_pos[], bool& w, int p, const char s)
{
      if(grid_pos[0]==s && grid_pos[0]==grid_pos[1] && grid_pos[1]==grid_pos[2])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[3]==s && grid_pos[3]==grid_pos[4] && grid_pos[4]==grid_pos[5])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[6]==s && grid_pos[6]==grid_pos[7] && grid_pos[7]==grid_pos[8])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[0]==s && grid_pos[0]==grid_pos[3] && grid_pos[3]==grid_pos[6])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[1]==s && grid_pos[1]==grid_pos[4] && grid_pos[4]==grid_pos[7])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[2]==s && grid_pos[2]==grid_pos[5] && grid_pos[5]==grid_pos[8])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[0]==s && grid_pos[0]==grid_pos[4] && grid_pos[4]==grid_pos[8])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[2]==s && grid_pos[2]==grid_pos[4] && grid_pos[4]==grid_pos[6])
      {
        system("clear");
        w=true; 
        std::cout << "\n" << r_g << " over, Player " << p << " wins!\n";
      }
      else if(grid_pos[0]!='1' && grid_pos[1]!='2' && grid_pos[2]!='3' && grid_pos[3]!='4' && grid_pos[4]!='5' && grid_pos[5]!='6' && grid_pos[6]!='7' && grid_pos[7]!='8' && grid_pos[8]!='9')
      {
        system("clear");
        w=true;
        std::cout << "\n" << r_g << " over, "<< r_g << " results in a tie!";
      }
}