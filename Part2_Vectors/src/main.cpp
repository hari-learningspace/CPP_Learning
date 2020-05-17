#include <iterator>
#include <main.h>

std::vector<std::vector<int>> Board{{0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 1, 0, 0, 0, 0},
                                    {0, 0, 0, 0, 1, 0}};

void printBoard(std::vector<std::vector<int>> &Board) {
  for (int i{0}; i < Board.size(); i++) {
    for (int j{0}; j < Board[i].size(); j++) {
      std::cout << Board[i][j];
    }
    std::cout << std::endl;
  }
}

int main(int argc, char **argv) {

  printBoard(Board);
  return 0;
}
