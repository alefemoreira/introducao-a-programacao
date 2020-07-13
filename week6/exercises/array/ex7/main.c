#include <stdio.h>
#include <stdlib.h>
#define length 10

int main() {
  int a[length], b[length], c[length];

  printf("Preencha o vetor A com inteiros:\n");

  for(int i = 0; i < length; i++) {
    printf("A[%d] = ", i);
    scanf("%d", &a[i]);

    if (i % 2 == 0)
      c[i] = a[i];
  }

  printf("Preencha o vetor B com inteiros:\n");

  for(int i = 0; i < length; i++) {
    printf("B[%d] = ", i);
    scanf("%d", &b[i]);

    if (i % 2 == 1)
      c[i] = b[i];
  }

  printf("Vetor C:\n");

  for(int i = 0; i < length; i++)
    printf("C[%d]: %d\n", i, c[i]);

  return 0;
}