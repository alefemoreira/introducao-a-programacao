#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  double sum = 0;
  double number = 1;
  int count = 0;

  while (number != 0) {
    printf("Digite um número \n");
    printf("[Digite 0 para sair]: ");
    scanf("%lf", &number);

    sum += number;
    count++;
  }

  printf("A soma do números é: %.1lf\n", sum);
  printf("A média aritmética é: %.1lf/%d = %.1lf\n", sum, count, sum/count);

  return 0;
}