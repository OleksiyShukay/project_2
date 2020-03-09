#include <iostream>
#include <string>
int main() {
  const int NUM = 20;
  const char RANGE_LINE = 'A' - 'a';
  char mass[NUM];
  std::cout << " enter string that will be change  ";
  std::cin >> mass;
  for (int i = 0; i < NUM; ++i) {
    if (mass[i] >= 'a' && mass[i] <= 'z')
      mass[i] += RANGE_LINE;
  }
  std::cout << mass;
  return 0;
}
