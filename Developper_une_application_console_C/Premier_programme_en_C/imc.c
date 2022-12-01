#include <stdio.h>

#include <stdlib.h>

int main() {
  int poids_en_kg = 0;
  scanf("%d", & poids_en_kg);
  float taille_en_metre = 0;
  scanf("%f", & taille_en_metre);
  float taille_au_carre = taille_en_metre * taille_en_metre;
  float imc = poids_en_kg / taille_au_carre;
  printf("Réponse : %f", imc);
  return 0;
}
