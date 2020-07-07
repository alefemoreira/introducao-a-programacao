#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  double value;
  int positive = 0, neutral = 0, negative = 0, count = 0;

  setlocale(LC_ALL, "Portuguese");

  while (count < 5) {
    printf("Escreva um valor real: ");
    scanf("%lf", &value);

    if (value > 0) {
      positive++;
    }
    else if (value < 0) {
      negative++;
    } else {
      neutral++;
    }
    
    count++;
  }
  
  printf("%d número(s) positivo(s);\n", positive);
  printf("%d número(s) negativo(s);\n", negative);
  printf("%d número(s) neutro(s);\n", neutral);

  return 0;
}