#include <iostream>
#include <memory>

int main() {
  // construct a unique pointer
  std::unique_ptr<int> uniquePtr(new int);

  // (1) shared pointer from unique pointer
  std::shared_ptr<int> sharedPtr1 = std::move(uniquePtr);

  // (2) shared pointer from weak pointer
  std::weak_ptr<int> weakPtr(sharedPtr1);
  std::shared_ptr<int> sharedPtr2 = weakPtr.lock();

  // (3) raw pointer from shared (or unique) pointer
  int *rawPtr = sharedPtr2.get();
  // delete rawPtr;

  return 0;
}

/* Conversion that is possible

1, Unique to Shared Pointer
2. Shared Pointer to Weak Pointer
3. Weak to Shared using Lock Function

Shared cannot be converted to other types and shd be maintained throughout the
program

*/