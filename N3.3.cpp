#include <iostream>
int main() {

  int N;
  std::cout << "enter any number";
  std::cin >> N;
  int count = 0;
  while (N != 0) {
    count += N & 1;
    N = N >> 1;
  }
  std::cout << count << std::endl;
  return 0;
}
