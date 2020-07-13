#include <stdio.h>
#include <stdlib.h>
#define length 10

int main() {
  int v[length];

  for(int i = 0; i < length; i++) {
    if (i % 2 == 0) {
      v[i] = 0;
    } else {
      v[i] = 1;
    }
  }

  for (int i = 0; i < length; i++) {
    printf("Vetor [%d] == %d;\n", i, v[i]);
  }

  return 0;
}