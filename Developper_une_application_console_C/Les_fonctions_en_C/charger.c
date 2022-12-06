#include <stdio.h>

int charger(int puissance) {
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
  int puissance = 150;
  int temps = charger(puissance);
  printf("Le temps de charge est de %d minutes.\n", temps);
  return 0;
}
