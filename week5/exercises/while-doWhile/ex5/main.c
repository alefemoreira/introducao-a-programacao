#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  double massaInicial, massaFinal;
  int tempo = 0;

  setlocale(LC_ALL, "Portuguese");

  printf("Escreva a massa inicial (g): ");
  scanf("%lf", &massaInicial);
  
  massaFinal = massaInicial;

  while (massaFinal >= 0.5) {
    tempo += 50;
    massaFinal /= 2;
  }
  
  printf("Massa inicial: %.3lfg \n", massaInicial);
  printf("Massa final: %.3lfg \n", massaFinal);
  printf("Tempo: %ds\n", tempo);

  return 0;
}