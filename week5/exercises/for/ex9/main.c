#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
  double number;
  int powers;
  setlocale(LC_ALL, "Portuguese");

  printf("Digite um número: ");
  scanf("%lf", &number);

  printf("Digite a qtd de potencias: ");
  scanf("%d", &powers);

  for (int i = 1; i <= powers; i++) {
    double power = pow(number, (double)i);
    printf("%.2lf elevado a %d = %.lf\n", number, i, power);
  }
  return 0;
}