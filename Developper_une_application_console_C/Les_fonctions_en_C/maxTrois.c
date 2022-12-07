#include <stdio.h>

void maxTrois(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  printf("Le plus grand des trois nombres est %d.\n", max);
}

int main() {
  maxTrois(5, 10, 15);

  return 0;
}
