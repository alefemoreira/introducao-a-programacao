#include <stdio.h>
#include <stdlib.h>
#define length 10

int main() {
  int a[length], b[length], c[length];

  printf("Preencha o vetor A com inteiros:\n");

  for(int i = 0; i < length; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("Preencha o vetor B com inteiros:\n");
  for(int i = 0; i < length; i++) {
    printf("B[%d] = ", i);
    scanf("%d", &b[i]);
  }

  printf("A soma de A + B: \n");

  for(int i = 0; i < length; i++){
    c[i] = a[i] + b[i];
    printf("A[%d] + B[%d] = %d\n", i, i, c[i]);
  }

  return 0;
}