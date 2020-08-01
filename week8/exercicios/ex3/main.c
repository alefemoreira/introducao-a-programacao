#include <stdio.h>
#include <stdlib.h>

int greater(int a, int b) {
  return a > b ? a : b;
}

int greaterTernary(int a, int b, int c) {
  return greater(a, greater(b, c));
}

int main(int argc, char const *argv[]) {
  int number1, number2, number3;

  printf("Digite o primeiro numero: ");
  scanf("%d", &number1);

  printf("Digite o segundo numero: ");
  scanf("%d", &number2);

  printf("Digite o terceiro numero: ");
  scanf("%d", &number3);

  printf("O maior numero é: %d\n", greaterTernary(number1, number2, number3));
  
  return 0;
}
