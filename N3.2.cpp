#include <iostream>
int main() {
	
  int n;
  int sum = 0;

  std::cout << "please, enter n = ";
  std::cin >> n;
  int num = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
    num = num + 1;
  }
  std::cout << " number of element " << num << std::endl;
  std::cout << "sum = " << sum << std::endl;
  std::cout << "Average = " << sum / num << std::endl;
  return 0;
}
