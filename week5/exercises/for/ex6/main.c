#include <stdio.h>
#include <stdlib.h>

#define qtd 8

int main() {
  int termoAntecessor = 0;
  int termoAtual = 1;
  int termoSucessor = 1;

  printf("Fibonacci : ");
  for(int i = 1; i <= qtd; i++) {
    printf("%d", termoSucessor);
    termoSucessor = termoAtual + termoAntecessor;
    termoAntecessor = termoAtual;
    termoAtual = termoSucessor;

    if (i != qtd) {
      printf(", ");
    }
  }

  printf("\n");

  return 0;
}