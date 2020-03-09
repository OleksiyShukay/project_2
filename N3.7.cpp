#include <iostream>
int main() {
	
  int tmp;
  std::cout << "enter 1st number";
  std::cin >> tmp;
  int num;
  std::cout << "enter 1d number";
  std::cin >> num;
  // std::cout << (tmp & (1 << num)) ? "yes\n" : "no\n";
  if ((tmp & (1 << num)) != 0) {
    std::cout << "no";
  } else
    std::cout << "yes";
  return 0;
}


