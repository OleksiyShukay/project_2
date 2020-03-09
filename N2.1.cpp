#include <cmath>
#include <iostream>
int main(int argc, char const *argv[]) {
  int min = 2;
  int max = 255;
  int a, b, c;

  std::cout << " Enter argument a from " << min << " to " << max << ": ";
  std::cin >> a;
  if (a < min || a > max || a == 0) {
    printf("ERROR");
    return 0;
  }
  std::cout << " Enter argument b from " << min << " to " << max << ": ";
  std::cin >> b;
  if (b < min || b > max) {
    printf("ERROR");
    return 0;
  }
  std::cout << " Enter argument c from " << min << " to " << max << ": ";
  std::cin >> c;
  if (c < min && c > max) {
    printf("ERROR");
    return 0;
  }
  int x1, x2;
  int D;
  int p = 4;
  int k = 2;
  D = (b * b - p * a * c);
  int const DEC_SQRT = sqrt(D);
  int const MULT_NUMB = (k * a);
  if (D >= 0) {
    x1 = (-b + DEC_SQRT) / MULT_NUMB;
    x2 = (-b - DEC_SQRT) / MULT_NUMB;
    printf("x1=%2.0d\n", x1);
    printf("x2=%2.0d\n", x2);
  } else {
    std::cout << " Root doesn't exist " << std::endl;
  }
  return 0;
}
