#include <stdio.h>

float calculer_consommation(float puissance, float temps);

int main() {
  printf("Entrez la puissance de l'appareil en Kilowatts : ");
  float puissance;
  scanf("%f", & puissance);

  printf("Entrez la durée de fonctionnement de l'appareil en heures : ");
  float temps;
  scanf("%f", & temps);

  float consommation = calculer_consommation(puissance, temps);

  printf("La consommation d'énergie de l'appareil est de %.2f Kilowatt-heures\n", consommation);

  if (consommation > 10) {
    printf("Haute consommation\n");
  } else if (consommation >= 5) {
    printf("Consommation normale\n");
  } else {
    printf("Faible consommation\n");
  }

  return 0;
}

float calculer_consommation(float puissance, float temps) {
  return puissance * temps;
}
