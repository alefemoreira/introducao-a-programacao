#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int matriz[3][3];

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Preencha a linha %d e a coluna %d: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\n");

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Linha %d e a coluna %d: %d\n", i, j, matriz[i][j]);
    }
  }
  return 0;
}
