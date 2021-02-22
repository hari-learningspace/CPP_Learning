#include <cassert>
#include <string>

// TODO: Declare Vehicle as the base class
class Vehicle {
public:
  int wheels;
  bool trunk;
  int seats;
};

// TODO: Derive Car from Vehicle
class Car : public Vehicle {
public:
  void setVehicleConfiguration(int w, int s, bool t) {
    wheels = w;
    seats = s;
    trunk = t;
  }
};
// TODO: Derive Sedan from Car
class Sedan : public Car {
public:
  Sedan() { setVehicleConfiguration(4, 4, true); }
};

// TODO: Update main to pass the tests
int main() {
  Sedan sedan;
  assert(sedan.seats == 4);
  assert(sedan.trunk == true);
  assert(sedan.wheels == 4);
}