
#include <string>
#include <array>
using namespace std;
namespace ariel
{
  string snowman(int number);  
};
/*

Example for a simple Snowman

             HHHHH
  _===_      HHHHH
  (.,.)     X(LNR)Y
  ( : )     X(TTT)Y
  ( : )      (BBB)

HERE IS A STORAGE:

H, represent = hat 
X, represent = left arm
L, represent = left eye
N, represent = nose
R, represent = right eye
Y, represent = right arm
T, represent = torso 
B, represent = base

For more details:
https://codegolf.stackexchange.com/q/49671/12019

The building procedure will be LINE by LINE
 
LINE\n      First 2 lines will be H only
LINE\n      Two with First
LINE\n      Third line is a bit complex, right\left arms will appear if it upwards " " else
LINE\n      Forth line same as third just downwards for right\left arms.
LINE\n      Fifth line will be B only

*/   

