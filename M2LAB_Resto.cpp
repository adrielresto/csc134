/*
M2LAB1
Create Sales
Restoa
2/5/24
*/
#include <iostream>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double lenght, width, height, cost, charge, profit;
    double volume;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    // Ask for user input
    cout << "What's the lenght? ";
    cin >> lenght;
    cout << "What's the width? ";
    cin >> width;
    cout << "What's the height? ";
    cin >> height;
    
    
    
    // Do calculations
    volume = lenght * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // print the answer
    cout << "The volume is: " << volume << endl;
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $ " << charge << endl;
    cout << "Profit: $ " << profit << endl;

    return 0;
}