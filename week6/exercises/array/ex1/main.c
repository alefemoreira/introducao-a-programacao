#include <stdio.h>
#include <stdlib.h>
#define length 10

int main() {
  int v[length], soma = 0;

  for(int i = 0; i < length; i++) {
    printf("Digite o %d° numero: ", i+1);
    scanf("%d", &v[i]);
    soma += v[i];
  }

  printf("A soma é: %d\n", soma);

  return 0;
}