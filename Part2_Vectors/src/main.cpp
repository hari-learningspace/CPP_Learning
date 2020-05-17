#include <fstream>
#include <iterator>
#include <main.h>
#include <sstream>

using namespace std;

vector<vector<int>> BoardFromFile;

string cellString(int estate) {
  string result;
  if (estate == kEmpty) {
    result = "0 ";
  } else if (estate == kObstacle) {
    result = "⛰️ ";
  }
  return result;
}

void printBoard(std::vector<std::vector<int>> &Board) {
  for (int i{0}; i < Board.size(); i++) {
    for (int j{0}; j < Board[i].size(); j++) {
      std::cout << cellString(Board[i][j]);
    }
    std::cout << std::endl;
  }
}

void ReadBoardFile(string FileName) {
  ifstream InputFile(FileName);
  string line;
  stringstream ss;
  vector<int> row;
  int i;

  if (InputFile.is_open()) {
    while (getline(InputFile, line)) {
      ss.clear(); // clean the string stream
      ss.str("");
      ss.str(line);
      row.clear();

      while (ss >> i) {
        row.push_back(i);
        if (ss.peek() == ',' || ss.peek() == ' ') {
          ss.ignore();
        }
      }
      BoardFromFile.push_back(row);
    }
    InputFile.close();
  } else {
    cout << "unable to open the input file\n";
  }

  // Print Matrix
  printBoard(BoardFromFile);
}

int main(int argc, char **argv) {

  string Filepath = __FILE__;
  Filepath = Filepath.substr(
      0, 1 + Filepath.find_last_of('/')); // Remove the current filename

  Filepath += "inputfile.txt"; // Append input file

  ReadBoardFile(Filepath);
  return 0;
}
