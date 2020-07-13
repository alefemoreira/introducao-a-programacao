#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <ctype.h>

bool between(int min, int max, int value) {
  return value >= min && value <= max;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int idade = 0, qtd = 0;
  char olhos, cabelos, sexo;
  int beetwenM18_35 = 0;
  int maiorIdade = 0;

  do {
    printf("Digite a idade do indivíduo\n[-1 Para sair] : ");
    // printf("");
    scanf("%d", &idade);

    if (idade > -1) {
      printf("Qual o sexo do indivíduo?\n");
      printf(" M - Masculino\n F - Feminino\n: ");
      // sexo = getchar();
      scanf("%s", &sexo);

      printf("Qual a cor dos olhos do indivíduo?\n");
      printf(" A - Azuis\n V - Verdes\n C - Castanhos \n: ");
      scanf("%s", &olhos);

      printf("Qual a cor dos cabelos do indivíduo?\n");
      printf(" L - Loiros\n C - Castanhos\n P - Pretos\n: ");
      scanf("%s", &cabelos);

      if (idade > maiorIdade) {
        maiorIdade = idade;
      }

      if (between(18, 35, idade)) {
        if (toupper(sexo) == 'F' && toupper(cabelos) == 'L' && toupper(olhos) == 'V') {
          beetwenM18_35++;
        }
      }
      qtd++;
    }
  } while (idade != -1);

  printf("%d\n", beetwenM18_35);
  printf("%d\n", qtd);
  printf("%d\n", maiorIdade);

  return 0;
  
}