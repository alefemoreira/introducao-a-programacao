#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  double maisPesado = 0, maisLeve = 0;
  int nPesado, nLeve, count = 1, qtdBois;

  printf("Quantos bois você possui? : ");
  scanf("%d", &qtdBois);

  while (count <= qtdBois) {
    double peso = 0;
    printf("Qual o peso do boi Nº %d? : ", count);
    scanf("%lf", &peso);
    
    if (peso > 0) {
      if (peso > maisPesado) {
        nPesado = count;
        maisPesado = peso;
      }

      if (peso < maisLeve) {
        nLeve = count;
        maisLeve = peso;
      }

      if (count == 1) {
        maisLeve = maisPesado;
      }
      
      count++;
    } else {
      printf("Peso inválida - ");
    }
    
  }

  printf("O boi mais gordo possui %.2lfKg e é o boi de Nº %d\n", maisPesado, nPesado);
  printf("O boi mais magro possui %.2lfKg e é o boi de Nº %d\n", maisLeve, nLeve);

  return 0;
}