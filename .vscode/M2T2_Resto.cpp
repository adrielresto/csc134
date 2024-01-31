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
   cout << "M2T2 - Apple Sales" << endl;
   // Simulate selling apples
   
  
  
   //Declare variables
   string name;
   int apples;
   double price_each;
   double total;
  // Ask user for information
  cout << "Hi, what's your name? ";
  cin >> name;
 cout << "Welcome to our orchard, " << name << endl;
 // TODO: Ask how many apples they want
 cout << "How many apples do you want? ";
 cin >> apples;
 // TODO: Ask the price for each
 cout << "How much are the apples? ";
 cin >> price_each;

  // Do the calculations
  total = apples * price_each;
  
  // Print the output
  //print receipt
  cout << "----------------------------" << endl;
    cout << "Thank you for shopping with us" << endl;
  cout << "----------------------------" << endl;
  // print number of apples, price each
    cout << "Welcome to the " << name << " Apple Orchard" << endl;
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "at a cost of $" << price_each << " each." << endl;
    cout << "For a total cost of $" << total << endl;
    cout << "----------------------------" << endl;
    return 0;
}
