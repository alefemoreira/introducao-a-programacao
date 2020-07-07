#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  double sum  = 0;
  double count = 0;

  for(int i = 13; i < 73; i++) {
    if (i % 2 == 0) {
      sum += i;
      count++;
    }
  }
  printf("Média arimética: \n%.2lf / %.2lf = %.2lf\n", sum, count, sum/count);
  return 0;
}