#include <iostream>
using namespace std;
std::vector<std::vector<int>> CreateBoard() {
  std::vector<int> row {"", "", ""};
  std::vector<std::vector<int>> board {row,row,row};
  return board;
}
