#include <stdio.h>
#include <stdlib.h>
#define length 10

int main() {
  int v[length], soma = 0, acimaMedia = 0;
  float media;

  for(int i = 0; i < length; i++) {
    printf("Digite o %d° numero: ", i+1);
    scanf("%d", &v[i]);
    soma += v[i];
  }

  media = (float)soma/length;
  printf("A média aritmética é: %.2f\n", media);

  for(int i = 0; i < length; i++) {
    if (v[i] > media) {
      acimaMedia++;
    }
  }

  printf("Existem %d números acima da média\n", acimaMedia);

  return 0;
}