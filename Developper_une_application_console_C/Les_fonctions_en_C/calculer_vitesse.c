#include <stdio.h>

float calculer_vitesse(float distance, float temps) {
  if (temps == 0) {
    return 0;
  }

  return distance / temps;
}

int main() {
  float distance, temps;
  float vitesse;

  printf("Entrez la distance parcourue en mètres : ");
  scanf("%f", & distance);
  printf("Entrez le temps écoulé en secondes : ");
  scanf("%f", & temps);

  vitesse = calculer_vitesse(distance, temps);

  if (vitesse >= 15 && vitesse <= 20) {
    printf("Vite");
  } else if (vitesse >= 5 && vitesse <= 15) {
    printf("Normale");
  } else if (vitesse >= 0 && vitesse <= 5) {
    printf("Lente");
  } else {
    printf("Vitesse invalide");
  }

  return 0;
}
