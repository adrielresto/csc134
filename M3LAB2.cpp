#include <iostream>



using namespace std;

int main() {
int numericalGrade;
string lettergrade;

    cout << "Enter the numerical grade: ";
    cin >> numericalGrade;

    if (numericalGrade >= 90 && numericalGrade <= 100) {
        lettergrade = "A";
    } else if (numericalGrade >= 80 && numericalGrade < 90) {
        lettergrade = "B";
    } else if (numericalGrade >= 70 && numericalGrade < 80) {
        lettergrade = "C";
    } else if (numericalGrade >= 60 && numericalGrade < 70) {
        lettergrade = "D";
    } else {
         lettergrade = "F";
    }
    cout << "Your letter grade is: ";
    cout << lettergrade;
}



   