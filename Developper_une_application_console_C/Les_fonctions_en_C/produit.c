#include <stdio.h>

int produit(int a, int b);

int main(void) {
  int x, y;

  printf("Entrez deux nombres : ");
  scanf("%d%d", & x, & y);

  int resultat = produit(x, y);

  printf("Le produit des deux nombres est : %d\n", resultat);

  return 0;
}

int produit(int a, int b) {
  return a * b;
}
