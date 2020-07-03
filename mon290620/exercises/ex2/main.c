#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("Escreva um numero: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("O número %d é par\n", number);
  } else {
    printf("O número %d é impar\n", number);
  }

  return 0;
}