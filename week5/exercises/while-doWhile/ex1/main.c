#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  double sum = 0;
  double number = 1;

  while (number != 0) {
    printf("Digite um número \n");
    printf("[Digite 0 para sair]: ");
    scanf("%lf", &number);

    sum += number;
  }
  printf("A soma de todos os números: %.1lf\n", sum);

  return 0;
}