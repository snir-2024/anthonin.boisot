#include <stdio.h>

int pair_impair(int n);

int main(void) {
  int n;

  printf("Saisissez un entier : ");
  scanf("%d", & n);

  if (pair_impair(n)) {
    printf("Le nombre saisi est pair.\n");
  } else {
    printf("Le nombre saisi est impair.\n");
  }

  return 0;
}

int pair_impair(int n) {
  return n % 2 == 0;
}
