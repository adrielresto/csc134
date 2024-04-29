/*
CSC 134
M6LAB1 - Buckshot Roulette
restoa1637
4/10/24
Array representing a magazine containing live and dummy rounds.




*/

//constant variable
const int MAX_SIZE = 6; // never more than six shells, size of array
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

//global array for the magazine
int magazine [MAX_SIZE] = {LIVE, BLANK, LIVE, BLANK, EMPTY, EMPTY};

#include <iostream>
#include "M6LAB1_utility.h"
using namespace std;
int main() {
    cout << "M6LAB1" << endl;

    //range based for loop
    for (int shell : magazine){
        //cout << shell << ", ";
        cout << "  ";
        cout << shell_name(shell);
    }
    cout << endl; 

    return 0;
}