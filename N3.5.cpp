#include <iostream>
int main() {

  int value;
  std::cout << " Enter value: ";
  std::cin >> value;
  int rev = 0;
  int num;
  while (value != 0) {
    num = value % 10;
    value = value / 10;
    rev = rev * 10;
    rev = rev + num;
  }
  std::cout << " Reveres : " << rev << std::endl;
}
