#include <stdio.h>
#include <stdlib.h>

int main() {
  int number1, number2, number3, parcela1, parcela2;
  int sum = 0;

  printf("Escreva o 1° numero: ");
  scanf("%d", &number1);
  sum += number1;

  printf("Escreva o 2° numero: ");
  scanf("%d", &number2);
  sum += number2;

  printf("Escreva o 3° numero: ");
  scanf("%d", &number3);
  sum += number3;


  if (number1 < number2 && number1 < number3) {
    sum -= number1;
    printf("O soma dos maiores foi %d\n", sum);
  } else if (number2 < number1 && number2 < number3) {
    sum -= number2;
    printf("O soma dos maiores foi %d\n", sum);
  } else if (number3 < number1 && number3 < number2){
     sum -= number3;
     printf("O soma dos maiores foi %d\n", sum);
  }  

  return 0;
}