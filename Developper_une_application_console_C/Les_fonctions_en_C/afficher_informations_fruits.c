#include <stdio.h>

void afficher_informations_fruits(int pommes, int poires) {
  printf("Vous avez %d pommes\n", pommes);
  printf("Vous avez %d poires\n", poires);
  printf("Vous avez un total de %d fruits\n", pommes + poires);
}

int main() {
  printf("Combien de pommes avez-vous ? ");
  int pommes;
  scanf("%d", & pommes);

  printf("Combien de poires avez-vous ? ");
  int poires;
  scanf("%d", & poires);

  afficher_informations_fruits(pommes, poires);

  return 0;
}
