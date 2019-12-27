#include "Account.h"
#include <iostream>

using Program::Stack;

int main() {
  Stack st(3);

  st.Push(12);
  st.Push(42);
  st.Push(3);

  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;

  return 0;
}
