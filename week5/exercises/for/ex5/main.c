#include <stdio.h>
#include <stdlib.h>

int main() {
  float s = 1;
  float numerador = 1;

  printf("S = 1 + ");
  for(int i = 2; i <= 50; i++) {
    numerador += 2;
    s += numerador / i;
    printf("(%.2f/%d)", numerador, i);
    if(i!=50){
      printf(" + ");
    }
  }
  printf("\n= %.2f\n", s);
  return 0;
};