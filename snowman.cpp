#include <iostream>
#include <string>
#include <array>
using namespace std;

// #include "snowman.hpp"

enum {ONE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN};
enum {H = 0, N, L, R, X, Y, T, B} ;

const array<string,5> Hat = {"", "     \n _===_", "  ___ \n .....", "   _  \n  /_\\ ","  ___ \n (_*_)"};

const array<string,5> Left = {"", "(.", "(o", "(O", "(-"};

const array<string,5> Nose = {"", ",", ".", "_", " "};

const array<string,5> Right = {"", ".)", "o)", "O)", "-)"};

const array<string,5> XUp = {"", " ", "\\", " ", " "};

const array<string,5> XDown = {"", "<", " ", "/", " "};

const array<string,5> YUp = {"", " ", "/", " ", " "};

const array<string,5> YDown = {"", ">", " ", "\\", " "};

const array<string,5> Torso = {"", "( : )", "(] [)", "(> <)", "(   )"};

const array<string,5> Base = {"", "( : )", "(\" \")", "(___)", "(   )"};

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


// int main(){

//     int num = 1;
//     int snow = 0;
//     int adder;
//     cout << "Welcome to the SnowMan Builder" << endl;

//     do {
//     cout << "Press R for Random SnowMan, Press C for Costum SnowMan" << endl;
//     cout << "To Exit Press Q" << endl;
//     char insertion;
//     cin >> insertion;


//     switch (insertion)
//     {

//     case 'r':    
//     case 'R': {
//             srand(clock());
//             array<int,4> arr = {1,2,3,4};  
//             int value = 0;
    
//             for (int i = 0; i < 8; i++)
//             {
//                 int digit = rand()%4;
//                 int n = arr[digit];

//                 value += n;
//                 if(i != 7)
//                     value*=10;
//             }

//             cout << ariel::snowman(value) << endl;
//             break;
//     } 

//     case 'c':
//     case 'C': {

//         cout << "Choose Hat ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For: " << endl;
//             cout << Hat.at(i) << endl;
//             cout << "\n";
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
    
//         cout << "Choose Nose ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:   ";
//             cout << Nose.at(i) << endl;
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
        
//         cout << "Choose Left Eye ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             cout << Left.at(i) << endl;
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
        
//         cout << "Choose Right Eye ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             cout << Right.at(i) << endl;
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
         
//         cout << "Choose Right Hand ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             if(i%2 != 0){
//                 cout << XDown.at(i) << endl;
//             }else { 
//                 cout << XUp.at(i) << endl;
//             }    
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
         
//         cout << "Choose Left Hand ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             if(i%2 != 0){
//                 cout << YDown.at(i) << endl;
//             }else { 
//                 cout << YUp.at(i) << endl;
//             }    
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
         
//         cout << "Choose Torso ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             cout << Torso.at(i) << endl;
//         }
//         cin >> adder;
//         snow += adder;
//         snow *= TEN;
        
//         cout << "Choose Base ->" << endl;
//         for (size_t i = 1; i < 5; i++)
//         {
//             cout << "Press " << i << " For:    ";
//             cout << Base.at(i) << endl;

//         }
//         cin >> adder;
//         snow += adder; 
        
//         cout << ariel::snowman(snow) << endl;

//         cout << "Congraazzts U Build A SnowMan" << endl;
//         break;

//     }   

//     case 'Q':
//     case 'q':
//         num = num*(-1);
//         break;
//     default:
//         cout << "Please Follow Instuctions... " << endl;
//         break;
//     }

//     } while (num > 0);
// }




