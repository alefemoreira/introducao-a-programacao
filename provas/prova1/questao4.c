#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) { 
  int numero_amostra, grade;
  float carbon_qty, toughness_rokwell, tensile_strength;

  setlocale(LC_ALL, "Portuguese");
  printf("Digite o numero da amostra: ");
  scanf("%d", &numero_amostra);

  printf("Digite o conteúdo de carbon (em %%) : ");
  scanf("%f", &carbon_qty);
  
  printf("Digite a dureza Rokwell ? : ");
  scanf("%f", &toughness_rokwell);
  
  printf("Digite a resistência à tração (em psi) : ");
  scanf("%f", &tensile_strength);

  printf("\n");

  if (carbon_qty < 7 && toughness_rokwell > 50 && tensile_strength > 80000) {
    printf("Teste 1, 2 e 3: Aprovado\n");
    grade = 10;
  } else if (carbon_qty < 7 && toughness_rokwell > 50) {
    printf("Teste 1 e 2: Aprovado\n");
    grade = 9;
  } else if (carbon_qty < 7) {
    printf("Teste 1: Aprovado\n");
    grade = 8;
  } else {
    grade = 7;
  }
  
  printf("\nA amostra %d, possui grau %d°\n", numero_amostra, grade);
  
  return 0;
}