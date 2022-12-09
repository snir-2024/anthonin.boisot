#include <stdio.h>

void afficherCarre(double n) {
  double carre = n * n;
  printf("Le carré de %f est %f\n", n, carre);
}

int main() {
  double nombre = 0.0;
  printf("Veuillez saisir un nombre réel : ");
  scanf("%lf", & nombre);
  afficherCarre(nombre);

  return 0;
}
