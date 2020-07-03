#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int option;
  double p1, p2;
  printf("Menu de opções:\n 1 - Somar dois números; \n 2 - Raiz quadrada de um número.\nDigite a opção desejada:\n");
  scanf("%d", &option);

  if (option == 1) {
    printf("Qual o 1° numero?: ");
    scanf("%lf", &p1);

    printf("Qual o 2° numero?: ");
    scanf("%lf", &p2);

    printf("A soma dos numeros é: %.2lf\n", p1+p2);
  } else {
    printf("Qual o numero?: ");
    scanf("%lf", &p1);

    printf("A raíz do numero é: %.2lf\n", sqrt(p1));
  }
  

  return 0; 
}