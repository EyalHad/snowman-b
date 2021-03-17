#include <iostream>
#include <string>
#include <array>
using namespace std;
#include "snowman.hpp"
using namespace ariel;

int main(){

    int num = 1;
    int snow = 0;
    int adder;
    cout << "Welcome to the SnowMan Builder" << endl;

    do {
    cout << "Press R for Random SnowMan, Press C for Costum SnowMan" << endl;
    cout << "To Exit Press Q" << endl;
    char insertion;
    cin >> insertion;


    switch (insertion)
    {

    case 'r':    
    case 'R': {
            //restarting the seed fot a new randomness
            srand(clock());
            array<int,4> arr = {1,2,3,4};  
            int value = 0;
    
            for (int i = 0; i < 8; i++)
            {
                int digit = rand()%4;
                int n = arr[digit];

                value += n;
                if(i != 7)
                    value*=10;
            }

            cout << ariel::snowman(value) << endl;
            break;
    } 

    case 'c':
    case 'C': {

        cout << "Choose Hat ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "\n";
            cout << "Press " << i << " For: " << endl;
            cout << Hat.at(i) << endl;
            
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
    
        cout << "Choose Nose ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:   ";
            cout << Nose.at(i) << endl;
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
        
        cout << "Choose Left Eye ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            cout << Left.at(i) << endl;
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
        
        cout << "Choose Right Eye ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            cout << Right.at(i) << endl;
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
         
        cout << "Choose Left Hand ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            if(i%2 != 0){
                cout << XDown.at(i) << endl;
            }else { 
                cout << XUp.at(i) << endl;
            }    
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
         
        cout << "Choose Right Hand ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            if(i%2 != 0){
                cout << YDown.at(i) << endl;
            }else { 
                cout << YUp.at(i) << endl;
            }    
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
         
        cout << "Choose Torso ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            cout << Torso.at(i) << endl;
        }
        cin >> adder;
        snow += adder;
        snow *= TEN;
        
        cout << "Choose Base ->" << endl;
        for (size_t i = 1; i < 5; i++)
        {
            cout << "Press " << i << " For:    ";
            cout << Base.at(i) << endl;

        }
        cin >> adder;
        snow += adder; 
        
        cout << ariel::snowman(snow) << endl;

        cout << "Congraazzts U Build A SnowMan" << endl;
        break;

    }   

    case 'Q':
    case 'q':
        num = num*(-1);
        break;
    default:
        cout << "Please Follow Instuctions... " << endl;
        break;
    }

    } while (num > 0);
}