#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main(int argc, char const *argv[]) {
  int A[ROWS][COLUMNS], T[COLUMNS][ROWS];

  printf("Preencha a matrix A(3x3) COM INTEIROS:\n");

  for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLUMNS; j++) {
      printf("Preencha a linha %d e a coluna %d de A: ", i, j);
      scanf("%d", &A[i][j]);
    }

  printf("\n");
  printf("Matriz A: {\n");
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLUMNS; j++) {
      printf("%3d ", A[i][j]);
    }
    printf("\n");
  }

  printf("}\n\n");

  printf("Matriz T: {\n");
  for(int i = 0; i < COLUMNS; i++) {
    for(int j = 0; j < ROWS; j++) {
      T[j][i] = A[j][i];
      printf("%3d ", T[j][i]);
    }
    printf("\n");
  }
  printf("}\n");

  return 0;
}
