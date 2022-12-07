#include <stdio.h>

void produit(int nombre1, int nombre2);

int main(void) {
  int x, y;

  printf("Entrez le premier nombre : ");
  scanf("%d", & x);

  printf("Entrez le deuxième nombre : ");
  scanf("%d", & y);

  produit(x, y);

  return 0;
}

void produit(int nombre1, int nombre2) {
  int resultat = nombre1 * nombre2;

  printf("Le produit des deux nombres est : %d\n", resultat);
}
