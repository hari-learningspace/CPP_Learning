#include <cassert>
#include <cmath>
#include <stdexcept>

#define PI 3.142
#define VCON 1.333

class Sphere {
public:
  static float Volume(int radius) { return (VCON * PI * pow(radius, 3)); }
};

// Test
int main(void) { assert(abs(Sphere::Volume(5) - 523.6) < 1); }