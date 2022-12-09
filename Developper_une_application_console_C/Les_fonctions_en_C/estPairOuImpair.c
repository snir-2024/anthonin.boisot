#include <stdio.h>

void estPairOuImpair(int n) {
  if (n % 2 == 0) {
    printf("%d est pair\n", n);
  } else {
    printf("%d est impair\n", n);
  }
}

int main() {
  int n;
  printf("Entrez un entier : ");
  scanf("%d", & n);
  estPairOuImpair(n);
  return 0;
}
