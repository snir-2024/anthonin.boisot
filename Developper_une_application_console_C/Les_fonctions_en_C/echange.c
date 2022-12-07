#include <stdio.h>

void echange(int * a, int * b) {
  int temp = * a;
  * a = * b;
  * b = temp;
}

int main() {
  int x, y;
  printf("Saisissez la valeur de x : ");
  scanf("%d", & x);
  printf("Saisissez la valeur de y : ");
  scanf("%d", & y);
  printf("Avant l'échange : x = %d, y = %d\n", x, y);
  echange( & x, & y);
  printf("Après l'échange : x = %d, y = %d\n", x, y);

  return 0;
}
