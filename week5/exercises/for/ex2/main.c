#include <stdio.h>
#include <stdlib.h>

int main() {
  for(int i = 1; i<=100; i++) {
    if(i % 4 == 0) {
      printf("%d; ", i);
    }
  }
  printf("\n");
  return 0;
}