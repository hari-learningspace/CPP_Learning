// TODO: Write hello() function

// TODO: Overload hello() three times

// TODO: Call hello() from main()
#include <iostream>
#include <string>

class Human {};
class Monkey {};
class Apes {};

void hello(Human human) { std::cout << "Hello Human\n"; }
void hello(Monkey monkey) { std::cout << "Hello Monkey\n"; }
void hello(Apes ape) { std::cout << "Hello Apes\n"; }

int main() {
  hello(Human());
  hello(Monkey());
  hello(Apes());
}