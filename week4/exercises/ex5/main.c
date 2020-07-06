#include <stdio.h>
#include <stdlib.h>

int main() {
  int idadeH1, idadeH2, idadeM1, idadeM2;
  int sum = 0;
  int product = 1;

  printf("Escreva do 1° homem: ");
  scanf("%d", &idadeH1);
  
  printf("Escreva do 2° homem: ");
  scanf("%d", &idadeH2);

  printf("Escreva da 1ª mulher: ");
  scanf("%d", &idadeM1);
  
  printf("Escreva da 2ª mulher: ");
  scanf("%d", &idadeM2);

  if (idadeH1 < idadeH2){
    sum += idadeH2;
    product *= idadeH1;
  } else if (idadeH1 > idadeH2){
    sum += idadeH1;
    product *= idadeH2;
  }

  if (idadeM1 < idadeM2){
    sum += idadeM1;
    product *= idadeM2;
  } else if (idadeM1 > idadeM2){
    sum += idadeM2;
    product *= idadeM1;
  }

  printf("Soma da idade do mais velho com a mais nova: %d\n", sum);
  printf("Produto da idade da mais velha com o mais novo: %d\n", product);

  return 0;
}