/*
Create a class LineSegment.
Declare an attribute length in class LineSegment.
Define pi (3.14159) with a macro.
Create a class Circle, composed of a LineSegment that represent's the circle's
radius. Use this radius to calculate the area of the circle (area of a circle
=r^2πr2
 ).
Verify the behavior of Circle in main().
*/

#include <assert.h>
#include <cmath>
#include <iostream>

// Define pi
#define PI 3.14159

// Define Line Class
struct LineSegment {
public:
  int length; // Define protected attribute length
};

// Define Circle subclass
class Circle {
public:
  // Define public setRadius() and getArea()
  Circle(LineSegment &radius);
  double Area();

private:
  LineSegment &radius_;
};

Circle::Circle(LineSegment &radius) : radius_(radius) {}

double Circle::Area() { return pow(Circle::radius_.length, 2) * PI; }

// Test in main()
int main() {
  LineSegment radius{3};
  Circle circle(radius);
  assert(int(circle.Area()) == 28);
}