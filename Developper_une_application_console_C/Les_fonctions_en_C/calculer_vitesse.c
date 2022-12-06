#include <stdio.h>

float calculer_vitesse(float distance, float temps) {
  return distance / temps;
}

int main() {
  float distance, temps, vitesse;

  printf("Entrez la distance parcourue (en metres) : ");
  scanf("%f", & distance);

  printf("Entrez le temps (en secondes) : ");
  scanf("%f", & temps);

  vitesse = calculer_vitesse(distance, temps);

  printf("La vitesse est de %.2f metres par seconde\n", vitesse);

  if (vitesse >= 15 && vitesse <= 20) {
    printf("Vite\n");
  } else if (vitesse >= 5 && vitesse < 15) {
    printf("Normale\n");
  } else if (vitesse >= 0 && vitesse < 5) {
    printf("Lent\n");
  }

  return 0;
}
