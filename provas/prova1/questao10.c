#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LENGTH 10
// VectorA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
// VectorB[] = {1, 2, 3, 14, 15, 16, 17, 18, 19, 20}
// VectorR[10] = {4, 5, 6, 7, 8, 9, 10}
int main(int argc, char const *argv[]) {
  int vectorA[LENGTH], vectorB[LENGTH], vectorR[LENGTH];
  int last_positionR = 0, diferent;

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
    diferent = 0;
    for(int j = 0; j < LENGTH; j++) {
      if (vectorA[i] != vectorB[j]){
        diferent = 1;
      }
      else {
        diferent = 0;
        break;
      }
    }
    if (diferent == 1) {
      vectorR[last_positionR] = vectorA[i];
      last_positionR++;
    }
  }

  printf("\nVetor Resultante: { ");
  for(int i = 0; i < last_positionR; i++) {
    printf("%d",vectorR[i]);
    if (i != last_positionR - 1)
      printf(", ");
  }
  printf(" }\n");

  return 0;
}