/*
Instructions
Add a new member variable to class Vehicle.
Output that new member in main().
Derive a new class from Vehicle, alongside Car and Bicycle.
Instantiate an object of that new class.
Print the object.
*/
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
  int wheels = 0;
  string color = "blue";
  int weight = 0;

  void Print() const {
    std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
  }
};

class Car : public Vehicle {
public:
  bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
  bool kickstand = true;
};

class Truck : public Vehicle {
public:
  std::string OEM;
};

int main() {
  Car car;
  car.wheels = 4;
  car.sunroof = true;
  car.Print();
  if (car.sunroof)
    std::cout << "And a sunroof!\n";

  Truck truck;
  truck.color = "red";
  truck.OEM = "Diamler";
  truck.weight = 100;
  truck.wheels = 4;

  if (truck.OEM == "Diamler")
    std::cout << "Diamler Truck\n";
}