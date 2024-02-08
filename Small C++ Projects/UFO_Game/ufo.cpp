#include <iostream>
#include <vector>
#include <string>
#include "ufo_functions.hpp"

int main() {

std::string codeword, answer;

codeword="codecademy";

answer="__________";

int misses=0;

std::vector<char> incorrect;

char letter;

bool guess=false;

greet();

while(codeword!=answer && misses<7){

  display_misses(misses);

  display_status(answer, incorrect);

  std::cout << "\n\nPlease enter your guess: ";

  std::cin >> letter;

  for(int a=0;a<codeword.size();a++)
  {
    if(codeword[a]==letter)
    {
      answer[a]=letter;

      guess=true;
    }
  }
  
  if(guess==false)
  {incorrect.push_back(letter);}

  if(guess==true)
    {std::cout << "\nCorrect!\n";}
  else
    {std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n"; 
    misses++;}

  guess=false;
}

end_game(answer, codeword);
}