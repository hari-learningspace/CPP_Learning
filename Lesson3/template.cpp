#include <assert.h>
#include <sstream>
#include <string>

// TODO: Add the correct template specification
template <typename KeyType, typename ValueType>

class Mapping {
public:
  // Constructor Initializing the public variables
  Mapping(KeyType key, ValueType value) : key(key), value(value) {}
  std::string Print() const {
    std::ostringstream stream;
    stream << key << ": " << value;
    return stream.str();
  }
  // Public Variables
  KeyType key;
  ValueType value;
};

// Test
int main() {
  Mapping<std::string, int> mapping("age", 20);
  assert(mapping.Print() == "age: 20");
}