#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid
class Pyramid {
public:
  int Length() { return length_; }
  int Width() { return width_; }
  int Height() { return height_; }
  int Volume() { return volume_; }
  Pyramid(int l, int w, int h);
  void setLength(int ln);
  void setWidth(int wd);
  void setHeight(int ht);
  void setVolume(int ln, int wd, int ht);

private:
  int length_{0};
  int width_{0};
  int height_{0};
  int volume_{0};
};
// public class members

// constructor
Pyramid::Pyramid(int ln, int wd, int ht) {
  setLength(ln);
  setWidth(wd);
  setHeight(ht);
  setVolume(Length(), Width(), Height());
}

// accessors

// mutators
void Pyramid::setLength(int ln) {
  if (ln < 0) {
    throw -1;
  } else {
    length_ = ln;
  }
}
void Pyramid::setWidth(int wd) {
  if (wd < 0) {
    throw -2;
  } else {
    width_ = wd;
  }
}

void Pyramid::setHeight(int ht) {
  if (ht < 0) {
    throw -2;
  } else {
    height_ = ht;
  }
}

// public Volume() function
void Pyramid::setVolume(int ln, int wd, int ht) {
  volume_ = (ln * wd * ht) / 3;
}

// private class members

// Test
int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.Length() == 4);
  assert(pyramid.Width() == 5);
  assert(pyramid.Height() == 6);
  assert(pyramid.Volume() == 40);

  bool caught{false}; // Boolean Variable initialized to false value

  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}