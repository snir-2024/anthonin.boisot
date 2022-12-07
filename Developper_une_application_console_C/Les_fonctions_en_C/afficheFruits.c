#include <stdio.h>

void afficheFruits(int pommes, int poires) {
  printf("Vous avez %d pommes et %d poires.\n", pommes, poires);
  printf("Vous avez un total de %d fruits.\n", pommes + poires);
}

int main() {
  int pommes, poires;

  printf("Combien de pommes avez-vous?\n");
  scanf("%d", & pommes);
  printf("Combien de poires avez-vous?\n");
  scanf("%d", & poires);

  afficheFruits(pommes, poires);

  return 0;
}
