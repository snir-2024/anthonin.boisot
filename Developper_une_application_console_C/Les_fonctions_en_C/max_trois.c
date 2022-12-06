#include <stdio.h>

void max_trois(int a, int b, int c) {
  int max = a;

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }

  printf("Le plus grand des trois est : %d\n", max);
}

int main() {
  max_trois(10, 15, 20);
  max_trois(30, 20, 10);
  max_trois(25, 25, 25);

  return 0;
}
