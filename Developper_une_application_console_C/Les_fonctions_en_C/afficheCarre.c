#include <stdio.h>

#include <math.h>

void afficheCarre(float x) {
  float resultat = x * x;
  printf("Le carré de %f est %f\n", x, resultat);
}

int main() {
  float nombre;
  printf("Veuillez saisir un nombre réel : ");
  scanf("%f", & nombre);

  afficheCarre(nombre);

  return 0;
}
