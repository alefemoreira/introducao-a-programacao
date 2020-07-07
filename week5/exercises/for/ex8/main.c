#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int insideInterval = 0, outsideInterval = 0;

  for(int i = 1; i <= 10; i++) {
    double value;
    printf("Escreva o %d° numero: ", i);
    scanf("%lf", &value);

    if (value >= 10 && value <= 50) {
      insideInterval++;
    } else {
      outsideInterval++;
    } 
  }
  
  printf("%d numeros dentro do intervalo [10...50]\n", insideInterval);
  printf("%d numeros fora do intervalo [10...50]\n", outsideInterval);

  return 0;
}