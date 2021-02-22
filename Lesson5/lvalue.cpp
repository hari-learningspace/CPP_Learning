#include <iostream>

int main() {
  int i = 1;
  int &j = i;
  ++i;
  ++j;

  std::cout << "Address of i " << &i << "\n";
  std::cout << "Address of j " << &i << "\n";
  std::cout << "i = " << i << ", j = " << j << std::endl;

  return 0;
}