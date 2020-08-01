#include <stdio.h>
#include <stdlib.h>

int greater(int a, int b) {
  return a > b ? a : b;
}

int main(int argc, char const *argv[]) {
  int number1, number2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &number1);

  printf("Digite o segundo numero: ");
  scanf("%d", &number2);

  printf("O maior numero é: %d\n", greater(number1, number2));
  
  return 0;
}
