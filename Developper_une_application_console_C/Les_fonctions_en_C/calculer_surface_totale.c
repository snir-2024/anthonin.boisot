#include <stdio.h>

int calculer_surface_totale(int longueur, int hauteur, int nombre_murs) {
  int surface_totale = longueur * hauteur * nombre_murs;
  return surface_totale;
}

int main() {
  int longueur, hauteur, nombre_murs;

  printf("Saisissez la longueur du mur : ");
  scanf("%d", & longueur);
  printf("Saisissez la hauteur du mur : ");
  scanf("%d", & hauteur);
  printf("Saisissez le nombre de murs : ");
  scanf("%d", & nombre_murs);

  int surface_totale = calculer_surface_totale(longueur, hauteur, nombre_murs);
  printf("La surface totale des murs est : %d\n", surface_totale);

  return 0;
}
