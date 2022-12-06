#include <stdio.h>

float surface_totale(float l, float h, int n) {
  return l * h * n;
}

int main() {
  float l, h;
  int n;

  printf("Entrez la longueur des murs : ");
  scanf("%f", & l);
  printf("Entrez la hauteur des murs : ");
  scanf("%f", & h);
  printf("Entrez le nombre de murs : ");
  scanf("%d", & n);

  printf("La surface totale des murs est de %.2f\n", surface_totale(l, h, n));

  return 0;
}
