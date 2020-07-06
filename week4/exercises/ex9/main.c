#include <stdio.h>
#include <stdlib.h>
// #include <math.h>
#include <ctype.h>

#define aliquot 0.3
#define A 0.5
#define B 0.8
#define C 1

int main() {
  char classe;
  double supplyValue, payValue, ICMS, consumption;

  printf("Qual seu consumo? (KW/h): ");
  scanf("%lf", &consumption);

  printf("Qual sua classe consumidora? : ");
  scanf("%s", &classe);
  // classe = getchar();

  if (tolower(classe) == 'a') {
    supplyValue = consumption * A;
  }

  if (tolower(classe) == 'b') {
    supplyValue = consumption * B;
  }

  if (tolower(classe) == 'c') {
    supplyValue = consumption * C;
  }

  ICMS = supplyValue * aliquot;
  payValue = supplyValue + ICMS;

  printf("Deve ser pago R$ %.2lf\n", payValue);
  
  return 0;
}