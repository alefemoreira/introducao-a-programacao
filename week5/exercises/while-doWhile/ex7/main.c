#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  int qtd, count = 1;
  int t1 = 2, t2 = 7, t3 = 3;

  setlocale(LC_ALL, "Portuguese");
  
  printf("Digite a qtd de termos: ");
  scanf("%d", &qtd);

  do {
    if (count % 3 == 1) {
      printf("%d ", t1);
      t1 *= 2;
    }
    if (count % 3 == 2) {
      printf("%d ", t2);
      t2 *= 3;
    }
    if (count % 3 == 0) {
      printf("%d ", t3);
      t3 *= 4; 
    }
    count += 1;
  } while (count <= qtd);
  
  printf("\n");

  return 0;
}