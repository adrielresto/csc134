#include <iostream>
using namespace std;

//CSC 134
//M7T1 - Restaurant Rating
// restoa1637
// 4/29/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
  // constructor
  Restaurant(string n, double r){
    name = n;
    rating = r;
  }
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    //print a formatted entry
    void printInfo(){
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create a restaurant
    Restaurant lunch_place = Restaurant ("Miyabi", 4.5);
    // the constructor saves us from having to use 3 lines to set up
    //Restaurant lunch_place;
    //lunch_place.setName("Place");
    //lunch_place.setRating( 3.0);
    cout << "Review info" << endl;
    cout << lunch_place.getName() << endl;
    cout << lunch_place.getRating() << endl;

    return 0;

}