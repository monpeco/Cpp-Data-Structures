#include <iostream>

int main() {
  if(true) {
    std::cout << "T1";
    if(false) {
      std::cout << "F2";
      if(true) {
        std::cout << "T3";
      } else {
        std::cout << "F3";
      }
    } else {
      std::cout << "T2";
      goto SKIP;
    }
  } else {
SKIP: std::cout << "F1";
  }
  std::cout << std::endl;

  return 0;
}