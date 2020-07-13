#include <stdio.h>
#include <stdlib.h>
#define length 20

int main() {
  int v[length], maior = 0, index;

  printf("Preencha o vetor V com inteiros: \n");
  for(int i = 0; i < length; i++){
    printf("V[%d] = ", i);
    scanf("%d", &v[i]);

    if (v[i] > maior) {
      maior = v[i];
      index = i;
    }
  }

  printf("Maior elemento possui a posição %d e valor %d\n", index, maior);

  return 0;
}