#include <stdio.h>
#include <stdlib.h>

int main() {
  int number1, number2, operation, result;

  printf("Escreva um numero: ");
  scanf("%d", &number1);

  printf("Escreva outro numero: ");
  scanf("%d", &number2);

  printf("Escolha uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n: ");
  scanf("%d", &operation);

  switch (operation) {
  case 1:
    result = number1 + number2;
    printf("O resultado de %d + %d = %d\n", number1, number2, result);
    break;

  case 2:
    result = number1 - number2;
    printf("O resultado de %d - %d = %d\n", number1, number2, result);
    break;

  case 3:
    result = number1 * number2;
    printf("O resultado de %d * %d = %d\n", number1, number2, result);
    break;

  case 4:
    result = number1 / number2;
    printf("O resultado de %d / %d = %d\n", number1, number2, number1 / number2);
    break;

  default:
    printf("Operação inválida\n");
    break;
  }

  return 0;
}