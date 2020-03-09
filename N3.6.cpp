#include <iostream>
int main() {

  int n;
  int sum = 0;
  std::cout << "please, enter n = ";
  std::cin >> n;
  while (n != 0) {
    int k = n % 10;
    n = n / 10;
    if ((k % 2) == 1) {
      std::cout << k << std::endl;
      sum += k;
    }
  }
  std::cout << "Exit " << sum << std::endl;
  return 0;
}
