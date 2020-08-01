#include <stdio.h>
#include <stdlib.h>

int isOdd(int number) {
  return number % 2;
}

int main(int argc, char const *argv[]) {
  int number;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if (isOdd(number)) {
    printf("O numer %d é impar\n", number);
  } else {
    printf("O numer %d é par\n", number);
  }
  
  return 0;
}
