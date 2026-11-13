#include "../stack.hpp"

#include <iostream>

// play with me, please

int main() {
  Stack stack;
  Push(&stack, "hello");
  Push(&stack, "world");

  while (Size(&stack) > 0) {
    std::cout << Top(&stack) << std::endl;
    Pop(&stack);
  }
}

/* if you do not know how to execute play,
please read setup.md again or ask for help in chat */