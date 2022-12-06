#include <stdio.h>

#include <math.h>

int main(void) {
  printf("Veuillez entrer votre poids en kg : ");
  float poids;
  scanf("%f", & poids);

  printf("Veuillez entrer votre taille en cm : ");
  float taille;
  scanf("%f", & taille);

  float imc = poids / pow(taille / 100.0, 2);
  printf("Votre IMC est : %.2f\n", imc);

  printf("Selon l'Organisation Mondiale de la Santé (OMS), ");
  if (imc < 18.5) {
    printf("un IMC inférieur à 18.5 est considéré comme une maigreur.\n");
  } else if (imc >= 18.5 && imc < 25.0) {
    printf("un IMC compris entre 18.5 et 24.9 est considéré comme un poids normal.\n");
  } else if (imc >= 25.0 && imc < 30.0) {
    printf("un IMC compris entre 25.0 et 29.9 est considéré comme un surpoids.\n");
  } else if (imc >= 30.0) {
    printf("un IMC supérieur ou égal à 30.0 est considéré comme une obésité.\n");
  }

  return 0;
}
