#include <stdio.h>
#include <stdlib.h>

int fatorial(unsigned int number);
float summation(unsigned int number);

int main() {
  float s;
  int number;

  printf("Escreva um número inteiro positivo: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Número negativo\n");

    return 0;
  }

  s = summation((unsigned int)number);

  printf("O somatório é igual a: %f\n", s);
  return 0;
}

int fatorial(unsigned int number) {
  if (number == 0 || number == 1)
    return 1;
  else
    return number * fatorial(number - 1);
}

float summation(unsigned int number) {
  float s = 1;

  for (unsigned int i = 1; i <= number; i++) {
    s += 1.0 / fatorial(i);
  }
  printf("%f\n", s);

  return s;
  
}