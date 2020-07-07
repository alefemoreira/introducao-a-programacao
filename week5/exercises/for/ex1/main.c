#include <stdio.h>
#include <stdlib.h>

int main() {//return 0;}
  printf("°F   |°C   \n");

  for(int F = 50; F <= 65; F++) {
    double C = (F - 32) / 1.8;
    printf("%d °F|%.2lf °C\n", F, C);
  }
  return 0;
}