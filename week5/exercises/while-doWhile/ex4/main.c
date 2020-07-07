#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  // return 0; }

  int number, count = 1;

  printf("Escreva um valor inteir: ");
  scanf("%d", &number);

  while (count <= number) {
    printf("%d x 5 = %d\n", count, count*5);
    printf("%d x 3 = %d\n\n", count, count*3);

    count++;
  }
  

  return 0;
}