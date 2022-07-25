#include <iostream>

using namespace std;


class Headphone {
  public:
    void headphoneColor() {
    cout << "Different types of headphone colors \n" ;
  }
};

// Derived class
class Boat : public Headphone {
  public:
    void headphoneColor() {
    cout << "Boat headphoneColor is : Red \n" ;
   }
};

// Derived class
class Sony : public Headphone{
  public:
    void headphoneColor() {
    cout << "Sony headphoneColor is : Grey \n" ;
  }
};

int main() {
  Headphone myHeadphone;
  Boat myBoat;
  Sony mySony;

  myHeadphone.headphoneColor();
  myBoat.headphoneColor();
  mySony.headphoneColor();
  return 0;
}