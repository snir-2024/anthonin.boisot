#include <stdio.h>

void afficherFruits(int nbPommes, int nbPoires) {
  printf("Vous avez %d pommes.\n", nbPommes);
  printf("Vous avez %d poires.\n", nbPoires);
  printf("Vous avez %d fruits en tout.\n", nbPommes + nbPoires);
}

int main() {
  int nbPommes, nbPoires;
  printf("Entrez le nombre de pommes que vous avez : ");
  scanf("%d", & nbPommes);
  printf("Entrez le nombre de poires que vous avez : ");
  scanf("%d", & nbPoires);

  afficherFruits(nbPommes, nbPoires);

  return 0;
}
