#include <iostream>
int main() {

  std::cout << " enter number x = ";
  int x;
  std::cin >> x;
  int d;
  d = x - 1;
  while (x % d != 0) {
    d = d - 1;
  }
  if (d == 1) {
    std::cout << " Max division number = " << x;
  } else
    std::cout << " Max division number = " << d;

  return 0;
}
