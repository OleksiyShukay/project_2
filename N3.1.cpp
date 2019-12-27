#include <iostream>
int main() {

  int value;
  std::cout << " Enter number of element: ";
  std::cin >> value;
  for (int i = 1; i <= value; ++i) {
    for (int j = 1; j < (value * 2); ++j) {
      if (i <= value * 2 && i >= value - j + 1 && j <= value + i - 1)
        std::cout << "*";
      else
        std::cout << ".";
    }
    std::cout << std::endl;
  }
  return 0;
}
