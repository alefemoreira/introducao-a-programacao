#include <stdio.h>
#include <stdlib.h>

int main() {
  float cm, inches;

  printf("Escreva uma medida em centímetro: ");
  scanf("%f", &cm);
  inches = cm * 2.54;

  printf("\nO valor de %.2f cm em polegas é: %.2f\"\n", cm, inches);
  
  return 0;
}