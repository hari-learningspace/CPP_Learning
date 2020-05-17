#include <array>
#include <fstream>
#include <main.h>
#include <sstream>
#include <string>

#if 0
struct houses {
  int houseno{};
  int streetno{};
  int pincode{};
};


int main(int argc, char **argv) {

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
      std::cout << VectorofVectors[i][j];
    }
    std::cout << "\n";
  }

#endif
  return 0;
}

#endif
using namespace std;

int main() {

  string line;
  stringstream ss;

  // storing the matrix
  vector<vector<float>> matrix;
  vector<float> row;

  string path = __FILE__;
  string sfile;
  path = path.substr(0, 1 + path.find_last_of('/'));
  sfile = path + "inputfile.txt";

  // couter for character in text  file line
  float i;

  // ;reading text file
  ifstream matrixfile;

  matrixfile.open(sfile);
  if (matrixfile.is_open()) {
    while (getline(matrixfile, line)) {
      ss.clear();
      ss.str("");
      ss.str(line);
      row.clear();

      while (ss >> i) {
        row.push_back(i);
        if (ss.peek() == ',' || ss.peek() == ' ') {
          ss.ignore();
        }
      }
      matrix.push_back(row);
    }
    matrixfile.close();

    for (int row{0}; row < matrix.size(); row++) {
      for (int column{0}; column < matrix[row].size(); column++) {
        cout << matrix[row][column] << " ";
      }
      cout << endl;
    }
  } else {
    cout << "unable to open file";
  }

  ofstream omatrixfile;
  sfile = path + "outputfile.txt";
  omatrixfile.open(sfile);
  if (omatrixfile.is_open()) {
    for (int row = 0; row < matrix.size(); row++) {
      for (int column = 0; column < matrix[row].size(); column++) {
        if (column != matrix[row].size() - 1) {
          omatrixfile << matrix[row][column] << ", ";
        } else {
          omatrixfile << matrix[row][column];
        }
      }
      omatrixfile << endl;
    }
  } else {
    cout << "unable to open the file";
  }

  omatrixfile.close();
  return 0;
}