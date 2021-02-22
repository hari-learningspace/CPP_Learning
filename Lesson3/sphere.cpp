/*n this exercise you will practice abstraction by creating a class which
represents a sphere.

Declare:

A constructor function that takes the radius as an argument
A member function that returns the volume
Directions
Define a class called Sphere.
Add one private member variable: radius.
Define a constructor to initialize the radius.
Define an accessor method that returns the radius.
Define a member function to return the volume of the sphere.
Write a main() function to initialize an object of type Sphere.
*/

#include <cassert>
#include <cmath>
#include <iostream>
#include <stdexcept>

#define VCONSTANT 1.333

// TODO: Define class Sphere
class Sphere {
public:
  // Constructor
  Sphere(int radius);
  // Accessors
  int Radius() const { return radius_; }
  float Volume() const { return volume_; }

private:
  // Private members
  float volume_;
  float radius_;
  float const pi{3.142};
};

#define PI 3.142
#define VCON 1.333

Sphere::Sphere(int radius)
    : radius_(radius), volume_(3.142 * 1.333 * pow(radius_, 3)) {
  if (radius < 0) {
    throw std::invalid_argument("radius must be positive value");
  }
}

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
  return 0;
}

#if 0

/*n this exercise you will practice abstraction by creating a class which
represents a sphere.

Declare:

A constructor function that takes the radius as an argument
A member function that returns the volume
Directions
Define a class called Sphere.
Add one private member variable: radius.
Define a constructor to initialize the radius.
Define an accessor method that returns the radius.
Define a member function to return the volume of the sphere.
Write a main() function to initialize an object of type Sphere.
*/

#include <cassert>
#include <cmath>
#include <iostream>
#include <stdexcept>

#define VCONSTANT 1.333
#define PI 3.142

// TODO: Define class Sphere
class Sphere {
public:
  // Constructor
  Sphere(int radius);
  // Accessors
  int Radius() { return radius_; }
  float Volume() { return calculateVolume(); }

private:
  float radius_;
  // Private members
  float calculateVolume();
};

Sphere::Sphere(int radius) {
  if (radius > 0) {
    radius_ = radius;
  }
}

float Sphere::calculateVolume() {
  return VCONSTANT * PI * radius_ * radius_ * radius_;
}

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
  return 0;
}
#endif