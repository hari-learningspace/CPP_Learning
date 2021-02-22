// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare class Rectangle
class Rectangle;

// Define class Square as friend of Rectangle
// Add public constructor to Square, initialize side
// Add friend class Rectangle
// Add private attribute side
class Square {
public:
  Square(int side) : side_(side) {}

private:
  friend class Rectangle;
  int side_;
};

// Define class Rectangle
// Add public function to Rectangle: Area()
// Add private attributes width, height;
class Rectangle {
public:
  int Area() const;
  Rectangle(Square &square);

private:
  int width_;
  int height_;
};

// Define a Rectangle constructor that takes a Square
Rectangle::Rectangle(Square &square)
    : width_(square.side_), height_(square.side_) {}

// Define Area() to compute area of Rectangle
int Rectangle::Area() const { return width_ * height_; }

// Update main() to pass the tests
int main() {
  Square square(4);
  Rectangle rectangle(square);
  assert(rectangle.Area() == 16);
}