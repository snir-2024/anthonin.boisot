#include <stdio.h>

#include <math.h>

void afficherCarre(double nombre) {
  double carre = pow(nombre, 2);
  printf("Le carré de %lf est %lf\n", nombre, carre);
}

int main() {
  double nombre;
  printf("Veuillez saisir un nombre réel : ");
  scanf("%lf", & nombre);
  afficherCarre(nombre);

  return 0;
}
