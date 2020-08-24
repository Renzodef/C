#include <stdio.h>

// The ## Operator
// The ## operator is also called the token pasting operator because it appends, or "pastes", tokens together.

#define VAR(name, num) name##num

int main() {
  int x1 = 125;
  int x2 = 250;
  int x3 = 500;
  
  printf("%d", VAR(x, 3)); // 500
  
  return 0;
}