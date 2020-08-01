#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main(int argc, char const *argv[]) {
  int matrix[ROWS][COLUMNS];
  int secondaryDiagonal[ROWS], sum = 0;

  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLUMNS; j++) {
      printf("Preencha a linha %d e a coluna %d: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Os valores da diagonal secundária são: ");
  for(int i = 0; i < ROWS; i++) {
    secondaryDiagonal[i] = matrix[i][(COLUMNS-1)-i];
    sum += secondaryDiagonal[i];
    
    printf("%d", secondaryDiagonal[i]);
    if ( i != ROWS - 1)
      printf(", ");
  }

  printf("\n");
  printf("A soma dos valores da diagonal secundária é %d\n", sum);

  return 0;
}
