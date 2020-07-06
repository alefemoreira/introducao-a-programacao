#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("Escreva um numero: ");
  scanf("%d", &number);

  if (number >= 0) {
    printf("O número %d é positivo\n", number);
  } else {
    printf("O número %d é negativo\n", number);
  }
  return 0;
}