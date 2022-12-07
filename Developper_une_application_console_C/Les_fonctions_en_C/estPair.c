#include <stdio.h>

int estPair(int nombre) {
  if (nombre % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  printf("Veuillez entrer un nombre : ");

  int nombre;
  scanf("%d", & nombre);

  if (estPair(nombre)) {
    printf("Le nombre %d est pair.\n", nombre);
  } else {
    printf("Le nombre %d est impair.\n", nombre);
  }

  return 0;
}
