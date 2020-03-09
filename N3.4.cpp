#include <iostream>
int main() {

  int value_1;
  std::cout << "Enter number";
  std::cin >> value_1;
  if (99999 >= value_1 || value_1 > 999999)
         std::cout << "False";
     else
     {
  int value_2 = value_1 / 1000;
  int value_3 = value_1 % 1000;
  if (((value_2 / 100) + (value_2 / 10) % 10 + (value_2 % 10)) ==
      ((value_3 / 100) + (value_3 / 10) % 10 + (value_3 % 10)))
    std::cout << "amounts match";
  else
    std::cout << "amounts do not match" << std::endl;
     }
  return 0;
}
