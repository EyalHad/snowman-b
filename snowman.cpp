#include <iostream>
#include <string>
#include <array>
using namespace std;

#include "snowman.hpp"
using namespace ariel;

int  charToInt( char c ) { return c - '0'; }
namespace ariel
{
  std::string snowman(int number)
  {
      
    if( number < 0){throw std::out_of_range {"The Number must be POSITIVE"};}

    string man = to_string(number);
    if(man.size() != EIGHT) { throw std::out_of_range {"Number Length must be = "+to_string(EIGHT)};}

    int copy = number;
    while(copy > 0){
        int check = copy%TEN;
        if(check == ONE || check == TWO || check == THREE || check == FOUR){
            copy /=TEN;
            continue;
        }
        throw std::out_of_range {"Number must not include Integer = "+to_string(check)};
    }
    string build;

    int h = charToInt(man[H]);
    int n = charToInt(man[N]);
    int l = charToInt(man[L]);
    int r = charToInt(man[R]);
    int x = charToInt(man[X]);
    int y = charToInt(man[Y]);
    int t = charToInt(man[T]);
    int b = charToInt(man[B]);
    

    build = Hat.at(h) + "\n";

    build += XUp.at(x) + Left.at(l) + Nose.at(n) + Right.at(r) + YUp.at(y) + "\n";

    build += XDown.at(x) + Torso.at(t) + YDown.at(y) + "\n";

    build += " "+Base.at(b);


    return build;
  
  }
}; 







