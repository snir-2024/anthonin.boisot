#include <stdio.h>

#include <stdlib.h>

int main() {
  int a = 0;
  int b = 0;
  scanf("%d", & a);
  scanf("%d", & b);
  int modulo = a % b;
  printf("Réponse : %d\n", modulo);
  return 0;
}
