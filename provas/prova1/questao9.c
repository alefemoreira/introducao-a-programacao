#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LENGTH 10

int main(int argc, char const *argv[]) {
  int vectorA[LENGTH], vectorB[LENGTH], last_positionB = 0, lengthB = 0;

  setlocale(LC_ALL, "Portuguese");
  printf("Preencha com valores INTEIROS\n\n");

  for(int i = 0; i < LENGTH; i++) {
    printf("Digite o valor do elemento de pos %d do vetor A: ", i);
    scanf("%d", &vectorA[i]);
    
    if (vectorA[i] != NULL && vectorA[i] > 0) {
      vectorB[last_positionB] = vectorA[i];
      last_positionB++;
    }
  }

  printf("Vetor Resultante: { ");
  for(int i = 0; i < last_positionB; i++) {
    printf("%d",vectorB[i]);
    if (i != last_positionB - 1)
      printf(", ");
  }

  printf(" }\n");
  
  return 0;
}