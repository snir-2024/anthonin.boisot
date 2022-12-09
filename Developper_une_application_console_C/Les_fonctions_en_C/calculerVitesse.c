#include <stdio.h>

float calculerVitesse(float distance, float temps) {
  return distance / temps;
}

void analyserVitesse(float vitesse) {
  if (vitesse >= 15 && vitesse <= 20) {
    printf("Vite\n");
  } else if (vitesse >= 5 && vitesse <= 15) {
    printf("Normale\n");
  } else if (vitesse >= 0 && vitesse <= 5) {
    printf("Lent\n");
  } else {
    printf("Vitesse hors limites\n");
  }
}

int main(void) {
  float distance = 100.0;
  float temps = 5.0;

  float vitesse = calculerVitesse(distance, temps);

  analyserVitesse(vitesse);

  return 0;
}
