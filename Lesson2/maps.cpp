#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using std::cout;
using std::string;
using std::unordered_map;
using std::vector;

int main() {
  string key = "word";
  string def1 = "1. Definittion";
  string def2 = "2. Definittion";
  string def3 = "3. Definittion";
  string def4 = "4. Definittion";
  string def5 = "5. Definittion";

  unordered_map<string, vector<string>> my_dict;

  if (my_dict.find(key) == my_dict.end()) {
    cout << "Key word not found in dictionary\n";
    cout << "Inserting key word to dictionary\n";
    my_dict[key] = vector<string>{def1, def2, def3, def4, def4};
  }

  auto definitions =
      my_dict[key]; // definitions is vector<string> type applied by compiler
  for (string i : definitions) {
    cout << i << "\n";
  }
}
