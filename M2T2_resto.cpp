/*
CSC 134
M2T2 - Apple Sales
Adriel J. Resto Barbosa
1/31/24
*/



#include <iostream>

using namespace std;

int main()
{
   cout << "M1LAB - Apple Sales" << endl;
   // Simulate selling apples
   string name = "Adriel";
   int num_apples = 20;
   double price_per_apple = 0.25;
  
  // Do the calculations
    double total_price;
    // NOTE: math operations are + - * /
    total_price = num_apples * price_per_apple;
  
  // Print the output
    cout << "Welcome to the " << name << " Apple Orchard" << endl;
    cout << "We have " << num_apples << " apples for sale." << endl;
    cout << "at a cost of $" << price_per_apple << " each." << endl;
    cout << "For a total cost of $" << total_price << endl;
    return 0;
}
