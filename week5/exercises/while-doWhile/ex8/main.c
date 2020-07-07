#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool between(int min, int max, int value) {
  return value >= min && value <= max;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int idade, qtd = 0;
  char olhos, cabelos, sexo;

  do {
    printf("Digite a idade do indivíduo\n[-1 Para sair] : ");
    scanf("%d", &idade);
    if (idade != -1) {
      printf("Qual o sexo do indivíduo?\n");
      printf(" M - Masculino\n F - Feminino\n: ");
      scanf("%s", &sexo);

      printf("Qual a cor dos olhos do indivíduo?\n");
      printf(" A - Azuis\n V - Verdes\n C - Castanhos \n: ");
      scanf("%s", &olhos);

      printf("Qual a cor dos cabelos do indivíduo?\n");
      printf(" L - Loiros\n C - Castanhos\n P - Pretos\n: ");
      scanf("%s", &cabelos);
    }

  } while (idade != -1);

  printf("\n\nGoodbye\n");

  return 0;
  
}