#include <iostream>
int main() {
	
  int n;
  int sum = 0;
  int num = 0;
  for (int i = 0; i <= 2; ++i) {
    std::cout << "please, enter n = ";
    std::cin >> n;
    while (n != 0) {
      sum += n % 10;
      n /= 10;
      num = num + 1;
    }
  }
  // std::cout << "number of element " << num << std::endl;
  // std::cout << "sum = " << sum << std::endl;
  if (sum % 3 == 0)
    std::cout << "yes" << std::endl;
  else
    std::cout << "no" << std::endl;
  return 0;
}
