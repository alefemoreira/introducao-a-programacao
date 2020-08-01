#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main(int argc, char const *argv[]) {
  int B[ROWS][COLUMNS];
  int sum = 0, greatest_sum = 0, greatest_row;

  printf("Preencha a matrix B(3x3) COM INTEIROS:\n");

  for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLUMNS; j++) {
      printf("Preencha a linha %d e a coluna %d de B: ", i, j);
      scanf("%d", &B[i][j]);
    }

  for(int i = 0; i < ROWS; i++) {
    sum = 0;
    for(int j = 0; j < COLUMNS; j++)
      sum += B[i][j];

    if (sum > greatest_sum){
      greatest_row = i;
      greatest_sum = sum;
    }
  }    

  for(int i = 0; i < ROWS; i++) {
    printf("Linha %d: ", i);
    for(int j = 0; j < COLUMNS; j++) {
      printf("%4d", B[i][j]);

      if (j != COLUMNS - 1) {
        printf(", ");
      }
    }
    printf("\n");
  }
  
  printf("A linha de maior soma é a linha %d, com a com a soma igual a %d\n"
    , greatest_row, greatest_sum);

  return 0;
}
