#include <stdio.h>
#include <stdlib.h>
#define length 16

int main() {
  int v[length], aux[length/2];

  printf("Preencha o vetor V com inteiros: \n");
  for(int i = 0; i < length; i++){
    printf("V[%d] = ", i);
    scanf("%d", &v[i]);

    if (i < length/2)
      aux[i] = v[i];
  }

  for(int i = 0; i < length; i++) {
    if (i < 8) 
      v[i] = v[(length/2)+i];
    else
      v[i] = aux[i - (length/2)];
    
    printf("V[%d] = %d\n", i, v[i]);
  }

  return 0;
}