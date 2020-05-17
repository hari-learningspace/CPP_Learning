#include <fstream>
#include <iterator>
#include <lib.h>
#include <main.h>
#include <sstream>

Board BoardFromFile;

std::string cellString(States estate) {
  std::string result;
  if (estate == kEmpty) {
    result = "0 ";
  } else if (estate == kObstacle) {
    result = "⛰️ ";
  }
  return result;
}

void printBoard(Board &InputBoard) {
  for (int i{0}; i < InputBoard.size(); i++) {
    for (int j{0}; j < InputBoard[i].size(); j++) {
      std::cout << cellString(InputBoard[i][j]);
    }
    std::cout << std::endl;
  }
}

void ReadBoardFile(std::string FileName) {
  std::ifstream InputFile(FileName);
  std::string line;
  std::stringstream ss;
  std::vector<States> row;
  int i;

  if (InputFile.is_open()) {
    while (getline(InputFile, line)) {
      ss.clear(); // clean the string stream
      ss.str("");
      ss.str(line);
      row.clear();

      while (ss >> i) {
        row.push_back((States)i);
        if (ss.peek() == ',' || ss.peek() == ' ') {
          ss.ignore();
        }
      }
      BoardFromFile.push_back(row);
    }
    InputFile.close();
  } else {
    std::cout << "unable to open the input file\n";
  }

  // Print Matrix
  printBoard(BoardFromFile);
}

int main(int argc, char **argv) {

  std::string Filepath = __FILE__;
  Filepath = Filepath.substr(
      0, 1 + Filepath.find_last_of('/')); // Remove the current filename

  Filepath += "inputfile.txt"; // Append input file

  ReadBoardFile(Filepath);

  int start[2] = {0, 0};
  int goal[2] = {4, 5};
  Board SearchPath;
  SearchPath = Search(BoardFromFile, start, goal);

  return 0;
}
