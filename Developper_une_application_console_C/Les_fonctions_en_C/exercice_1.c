#include <stdio.h>

#include <stdlib.h>

void Echange(int * , int * );
int main(void) {
  int x, y;
  printf("Choisissez une valeur entière appelée \"x\" :\n");
  scanf("%d", & x);
  printf("Choisissez une valeur entière appelée \"y\" :\n");
  scanf("%d", & y);
  printf("Avant d'appeler la fonction d'échange :\nx = %d\ny = %d\n", x, y);
  Echange( & x, & y);
  printf("Après avoir appelé la fonction d'échange :\nx = %d\ny = %d\n", x, y);
  return 0;
}
void Echange(int * a, int * b) {
  int temp = * a;* a = * b;* b = temp;
}
