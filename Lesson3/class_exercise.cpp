/*
Define a class Animal.
Define 3 member variables: color, name, age.
Define a derived class Snake that inherits from the base class Animal.
Create a member variable length for the Snake class.
Create a derived class Cat that inherits from the base class Animal.
Create a member variable height for the Cat class.
Create MakeSound() member functions for each of the derived classes.
In the main() function instantiate Snake and Cat objects. Initialize both their
unique and derived attributes. Program them to make a sound.
*/
#include <iostream>
#include <string>

class Animal {
public:
  std::string color;
  std::string name;
  int age;
};

class Snake : public Animal {
public:
  int length;
  void MakeSound() {
    std::cout << "Hiss Hiss"
              << "\n";
  }
};

class Cat : public Animal {
public:
  int height;
  void MakeSound() {
    std::cout << "Meow Meow"
              << "\n";
  }
};

int main() {
  Snake snake;
  Cat cat;
  snake.color = "brown";
  snake.name = "nagaraj";
  snake.age = 1;
  snake.length = 5;

  cat.color = "black and white";
  cat.name = "Tom";
  cat.age = 2;
  cat.height = 3;

  snake.MakeSound();
  cat.MakeSound();

  return 0;
}

#if 0

// Example solution for Animal class
#include <iostream>
#include <string>

// Define base class Animal
class Animal {
public:
    std::string color;
    std::string name;
    int age;
};

// Declare derived class Snake
class Snake : public Animal {
public:
    int length;
    
    void MakeSound() const
    {
        std::cout << "Hiss\n";
    }
};

// Declare derived class Cat
class Cat : public Animal {
public:
    int height;

    void MakeSound() const
    {
        std::cout << "Meow\n";
    }
};

// Test in main()
int main() {

    Cat cat;
    Snake snake;

    cat.age = 10;
    cat.name = "Lucy";
    cat.MakeSound();
    snake.MakeSound();

    std::cout << cat.age << " " << cat.name << "\n";
}

#endif