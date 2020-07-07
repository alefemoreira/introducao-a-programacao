#include <stdio.h>
#include <stdlib.h>

int main() {
  double S = 0;
  printf("S = ");
  for (int i = 1; i <= 50; i++) {
    printf("(1 / %d)", i);
    if (i != 50) {
      printf(" + ");
    }    
    S += 1.0/i;
  }
  printf(" = %lf\n", S);
  return 0;
}