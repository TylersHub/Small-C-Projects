#ifndef ttt_functions
#define ttt_functions

#include <iostream>

//Functions Declarations

void ttt_intro();

void ttt_grid(char grid_pos[]);

void ttt_spot_replace(char grid_pos[], char s, int spt, bool& t);

void ttt_end(std::string r_g, const char grid_pos[], bool& w, int p, char s);

#endif