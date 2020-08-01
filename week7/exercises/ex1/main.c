#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLUMNS 5

int main(int argc, char const *argv[]) {
  int matrixR[ROWS][COLUMNS], greater = 0;
  int position[2] = { 0, 0 };

  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLUMNS; j++) {
      printf("Preencha a linha %d e a coluna %d: ", i, j);
      scanf("%d", &matrixR[i][j]);
    }
  }

  printf("\n");

  for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLUMNS; j++) 
      if (matrixR[i][j] > greater) {
        greater = matrixR[i][j];
        position[0] = i;
        position[1] = j;
      }

  printf("O maior velor está na linha %d e na coluna %d. Seu valor é %d!\n"
    , position[0], position[1], greater);

  return 0;
}
