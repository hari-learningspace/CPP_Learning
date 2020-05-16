#include <array>
#include <main.h>

struct houses {
  int houseno{};
  int streetno{};
  int pincode{};
};

int main(int argc, char **argv) {

#if 0 // std::array

	std::array<int,5> myintarray {1,2,3,4,5}; //Uniform Initialization
	std::array<float,2> myintarray2 { 1.2, 1.0};
	std::array<houses,3> colony ;
	std::array<std::string, 5> arraystring{"Hari", "Keerthana"};

	colony[0] = {1,2,3};
	colony[1] = {4,5,6};
	colony[2] = {1,2,3};

	std::cout << myintarray.size() << "\n";
	for(auto i:myintarray)
	{
		std::cout << "i = " << i << "\n";
	}

	for(auto i:myintarray2)
	{
		std::cout << "i2 = " << i << "\n";
	}

	
	for(auto i:colony)
	{
		std::cout << "struct = "  << i.houseno << "\n"; 
		std::cout << "struct = "  << i.streetno << "\n"; 
		std::cout << "struct = "  << i.pincode << "\n"; 

	}

	for(auto i:arraystring)
	{
		std::cout << "str = " << i << "\n";
	}
#endif

#if 0 // Vector Basics
  std::vector<int> vector_example_1{1, 2, 3, 4, 5};

  std::cout << vector_example_1.size() << "\n";

  vector_example_1.push_back(6);
  vector_example_1.push_back(7);

  vector_example_1[5] = 66;
  vector_example_1.at(6) = 77;

  std::cout << vector_example_1.size() << "\n";

  for (auto i{vector_example_1.begin()}; i < vector_example_1.end(); i++) {
    std::cout << *i << "\n";
  }

  for (int i{0}; i < vector_example_1.size(); i++) {
    std::cout << vector_example_1[i] << "\n";
  }

#endif

#if 0 // Array of Vectors

  std::vector<int> ArrayVector[5];

  std::cout << ArrayVector[0].size() << "\n";

  for (int i{0}; i < 5; i++)
    for (int j{0}; j < 5; j++)
      ArrayVector[i].push_back(j);

  for (int i{0}; i < 5; i++) {
    for (int j{0}; j < 5; j++) {
      std::cout << ArrayVector[i][j] << " ";
    }
    std::cout << "\n";
  }

#endif

#if 1 // Vector of Vectors

  std::vector<std::vector<int>> VectorofVectors{{1, 2, 3, 4, 5},
                                                {6, 7, 8, 8, 9, 10}};

  for (int i{0}; i < VectorofVectors.size(); i++) {
    for (int j{0}; j < VectorofVectors[i].size(); j++) {
      std::cout << VectorofVectors[i][j] << " ";
    }
    std::cout << "\n";
  }

#endif
  return 0;
}
