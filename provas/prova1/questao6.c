#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) {
  int factor1, factor2, product = 0;

  setlocale(LC_ALL, "Portuguese");
  printf("Digite o 1° fator da multiplicação: ");
  scanf("%d", &factor1);

  printf("Digite o 2° fator da multiplicação: ");
  scanf("%d", &factor2);

  printf("%d x %d = ?\n", factor1, factor2);

  for(int i = 1; factor1 >= 1; i++) {
    printf("%d x %d ", factor1, factor2);
    if (factor1 % 2 == 1) {
      printf("-> %d", factor2);
      product += factor2;
    }

    factor1 /= 2;
    factor2 *= 2;
    printf("\n");
  }

  printf("O resultado é: %d\n", product);

  return 0;
}