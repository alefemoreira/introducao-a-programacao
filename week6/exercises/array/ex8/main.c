#include <stdio.h>
#include <stdlib.h>
#define length 20

int main() {
  int a[length], b[length];

  printf("Preencha o vetor A: \n");
  for(int i = 0; i < length; i++){
    printf("A[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("\n---\n\n");

  for(int i = 0; i < length; i++){
    b[i] = a[length-1-i];
    printf("B[%d] = %d;\n", i, b[i]);
  }

  return 0;
}