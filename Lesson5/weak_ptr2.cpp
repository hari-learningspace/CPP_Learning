#include <iostream>
#include <memory>

int main() {
  std::shared_ptr<int> mySharedPtr(new int);
  std::weak_ptr<int> myWeakPtr(mySharedPtr);

  mySharedPtr.reset(new int);
  myWeakPtr = mySharedPtr;

  if (myWeakPtr.expired() == true) {
    std::cout << "Weak pointer expired!" << std::endl;
  }

  return 0;
}