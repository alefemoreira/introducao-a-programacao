#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;

  printf("Entre um numero: ");
  scanf("%i", &number);

  printf("\n(-1) Antecessor: %i\n", number-1);
  printf("Numero: %i\n", number);
  printf("(+1) Sucessor: %i\n", number+1);

  return 0;
}