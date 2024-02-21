// CSC 134 
// M3T3 - RNG
// restoa1637
// 2/21/24

#include <iostream>
#include <cstdlib> // for rand()
using namespace std;

int main() {
    cout << "Welcome to the craps table " << endl;
    // set up variables
    int roll;
    int die1, die2;
    int seed;

    // set random seed 
    //cout << "Enter lucky numnber: ";
    //cin >> seed;
    srand(time(0)); //our lucky number is the time in msec


    // roll the dice
    //cout << "What did you roll? ";
    //cin >> roll;
    die1 = (rand() % 6) +1; // 1 to 6
    die2 = (rand() % 6) + 1;
    roll = die1 + die2;


    // get the results
    cout << "Roll " << die1 << " and " << die2 << " totals: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "you win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "you lose. . ." << endl;
    }
    else{
        cout << "your points is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }
    
    return 0;
}