#pragma once
#include <iostream>

namespace Program {

class Stack {
private:
  int *array;
  int Max;
  int Current_position;

public:
  // stack memory
  Stack(int number) {
    Max = 100;
    Current_position = 0;
    if (number <= Max) {
      array = new int[number];
      Max = number;
    } else {
      std::cout << "Stack overflow";
    }
  }

  ~Stack() { delete[] array; };

  bool Push(int n) {
    if (Current_position == Max)
      return false;
    else {
      array[Current_position] = n;
      Current_position++;
      return true;
    }
  }

  int Pop() {
    if (Current_position < 0) {
      return 0;
    } else {
      return array[--Current_position];
    }
  }

  bool Is_empty() {
    if (Current_position <= 0)
      return true;
    else
      return false;
  }

  bool Is_full() {
    if (Current_position == Max)
      return true;
    else
      return false;
  }
};

} 