#include <stdio.h>

int temps_de_charge(int puissance) {
  if (puissance >= 0 && puissance <= 100) {
    return 30;
  } else if (puissance > 100 && puissance <= 200) {
    return 15;
  } else if (puissance > 200 && puissance <= 300) {
    return 5;
  } else {
    return 0;
  }
}

int main() {
  int temps = temps_de_charge(100);
  printf("Le temps de charge est de %d minutes\n", temps);
  return 0;
}
