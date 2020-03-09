#include <iostream>
int main() {

  const int NUM = 20;
  int k = 0;
  char mass[NUM];
  char *pMass = mass;
  std::cout << " enter any string ";
  std::cin >> mass;
  for (int i = 0; pMass[i] != '\0'; ++i) {
    k++;
  }
  std::cout << " Reverse string ";
  for (int i = k - 1; i >= 0; --i) {
    std::cout << pMass[i];
  }

  return 0;
}
