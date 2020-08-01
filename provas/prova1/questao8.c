#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LENGTH 10

int main(int argc, char const *argv[]) {
  int vectorA[LENGTH], vectorB[LENGTH], result = 0;

  setlocale(LC_ALL, "Portuguese");
  printf("Preencha com valores INTEIROS\n");

  for(int i = 0; i < LENGTH; i++) {
    printf("Digite o valor do elemento de pos %d do vetor A: ", i);
    scanf("%d", &vectorA[i]);
  }

  printf("\n");

  for(int i = 0; i < LENGTH; i++) {
    printf("Digite o valor do elemento de pos %d do vetor B: ", i);
    scanf("%d", &vectorB[i]);
  }

  printf("\n");

  for(int i = 0; i < LENGTH; i++) {
    int sub = vectorB[(LENGTH-1)-i] - vectorA[i];
    printf("%d - %d = %d\n", vectorB[(LENGTH-1)-i], vectorA[i],sub);
    result += sub;
  }

  printf("A soma dos valores da subtração é: %d\n", result);

  return 0;
}