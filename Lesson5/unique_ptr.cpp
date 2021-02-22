#include <iostream>
#include <memory>
#include <string>

class MyClass {
private:
  std::string _text;

public:
  MyClass() {}
  MyClass(std::string text) { _text = text; }
  ~MyClass() { std::cout << _text << " destroyed" << std::endl; }
  void setText(std::string text) { _text = text; }
};

int main() {
  // create unique pointer to proprietary class
  std::unique_ptr<MyClass> myClass1(new MyClass());
  std::unique_ptr<MyClass> myClass2(new MyClass("String 2"));

  // call member function using ->
  myClass1->setText("String 1");

  // use the dereference operator *
  //*myClass1 = *myClass2;

  // use the .get() function to retrieve a raw pointer to the object
  std::cout << "Objects have stack addresses " << myClass1.get() << " and "
            << myClass2.get()
            << std::endl; // get is a method from unique pointer to retrive the
                          // data of pointer

  return 0;
}

/* Result

Stack --> Top

     String 1
     String 2
Stack--> Top

Objects have stack addresses 0x557361a1ceb0 and 0x557361a1cee0
String 2 destroyed
String 1 destroyed

So when Stack is out of scope it calls the destructor in Last in First Out
Manner

*/
