#include <stdio.h>
#include <stdlib.h>

void drawChar(char symbol, int quantityLines) {
  for(int i = 0; i < quantityLines; i++){
    printf("%c\n", symbol);
  }
}

int main(int argc, char const *argv[]) {
  int qtyLines;
  char symbol;

  printf("Digite um caractere: ");
  scanf(" %c", &symbol);

  printf("Digite a quantide de linhas a serem impressas: ");
  scanf("%d", &qtyLines);

  drawChar(symbol, qtyLines);
  
  return 0;
}
