#include <iostream>

using namespace std;

class Cycle {
  public:
    string brand = "Hero";
};

// Derived class
class Bicycle: public Cycle {
  public:
    string model = "Hero165";
};

int main() {
  Bicycle mybicycle;
  cout << mybicycle.brand + " " + mybicycle.model;
  return 0;
}