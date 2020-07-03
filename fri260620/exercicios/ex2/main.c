#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;

  printf("Adicione o primeiro número: ");
  scanf("%d", &x);
  printf("Adicione o segundo número: ");
  scanf("%d", &y);
  
  printf("\nSoma: %d\n", x+y);
  printf("Produto: %d\n", x*y);
  printf("Quociente: %d\n", x/y);
  printf("Resto da divisão: %d\n", x%y);
  
  return 0;
}