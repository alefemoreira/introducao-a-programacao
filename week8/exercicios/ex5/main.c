#include <stdio.h>
#include <stdlib.h>

int factorsSum(int a, int b, int c);

int main(int argc, char const *argv[]) {
  int number1, number2, number3;

  printf("insira o primeiro numero [MAIOR QUE 1]: ");
  scanf("%d", &number1);

  printf("insira o segundo numero: ");
  scanf("%d", &number2);

  printf("insira o terceiro numero: ");
  scanf("%d", &number3);

  printf("Soma dos divisores: %d\n", factorsSum(number1, number2, number3));

  return 0;
}

int factorsSum(int a, int b, int c) {
  int sum = 0;

  if (a > 1 && c >= b) {
    for(int i = b; i <= c; i++)
      if (i % a == 0)
        sum += i;

    return sum;
  }

  return 0;  
}
