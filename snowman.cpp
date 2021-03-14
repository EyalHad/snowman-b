#include <iostream>
#include <string>
#include <array>
using namespace std;

#include "snowman.hpp"

enum {ONE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN};
enum {H = 0, L, N, R, X, Y, T, B} ;

namespace ariel
{
  std::string snowman(int number)
  {
      if( number < 0){throw std::out_of_range {"The Number must be POSITIVE"};}
      int copy = number;
      while(copy > 0){
          int check = copy%TEN;
          if(check == ONE || check == TWO || check == THREE || check == FOUR){
              copy /=10;
              continue;
          }else{
              throw std::out_of_range {"Number must not include Integer = "+to_string(check)};
          }
      }
      string man = to_string(number);
      if(man.size() != EIGHT) { throw std::out_of_range {"Number Length must be = "+to_string(EIGHT)};}

      cout << man << endl;
      string build;
      build += parts::H[man[H]] +"\n";

      cout << build << endl;
      if(man[X] == TWO) { build += parts::X[TWO] +"("+ parts::L[man[L]] + parts::N[man[N]] + parts::R[man[R]]+ ")";}
      else{build += parts::X[FOUR] +"("+ parts::L[man[L]] + parts::N[man[N]] + parts::R[man[R]]+")"; }
      if(man[Y] == TWO) { build += parts::Y[THREE] +"\n";}
      else{ build += parts::Y[FOUR] +"\n";}
      if(man[X] == ONE || man[X] == THREE) {build += parts::X[man[X]] +"("+ parts::T[man[T]] +")"; }
      else{build += parts::X[FOUR] +"("+ parts::T[man[T]] +")";}
      if(man[Y] == ONE || man[Y] == THREE) {build += parts::Y[man[Y]] +"\n";}
      else{build += parts::Y[FOUR] +"\n";}
      build += " ("+parts::B[man[B]]+") ";
      cout << build << endl;

      return build;
  }
}; 


    //   string HAT;
    //   string HEAD;
    //   string TORSO;
    //   string BASE;
    //   for(std::string::size_type i = 0; i < man.size(); i++){
    //       string part = ""+man[i];
    //       int choose = std::stoi(part);
    //       switch (choose)
    //       {
    //       case ONE:
              
    //           break;
    //       case TWO:
    //           /* code */
    //           break;
    //       case THREE:
    //           /* code */
    //           break;
    //       case FOUR:
    //           /* code */
    //           break;
    //       }
    //   }
      
    //   return HAT + HEAD + TORSO + BASE;



