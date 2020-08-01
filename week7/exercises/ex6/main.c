#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLUMNS 3

int main(int argc, char const *argv[]) {
  // srand((unsigned)time(NULL));
  int matrix[ROWS][COLUMNS],
      zero_qty_row[ROWS] = {0,0,0}, zero_qty_column[COLUMNS]= {0,0,0}, 
      pair_qty_rows = 0, pair_qty_columns = 0,
      pair_row, pair_column;
      
  float average_row[ROWS] = {0,0,0}, average_colums[COLUMNS]= {0,0,0}; // Arithmetic average
  float greatest_row_average_value = 0;
  int greatest_row_average_position = 0; // Arithmetic average

  printf("Preencha a matriz:\n");
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLUMNS; j++){
      printf("Preencha a posição %d x %d: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  
  printf("\nMatrix:\n");
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLUMNS; j++)
      printf("%3d ", matrix[i][j]);
    printf("\n");
  }

  printf("Digite uma linha para contar a quantidade de pares: ");
  scanf("%d", &pair_row);
  printf("Digite uma coluna para contar a quantidade de pares: ");
  scanf("%d", &pair_column);

  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLUMNS; j++) {
      if (matrix[i][j] == 0){
        zero_qty_row[i]++;
        zero_qty_column[j]++;
      }

      if (matrix[i][j] % 2 == 0) {
        if (i == pair_row)
          pair_qty_rows++;

        if (j == pair_column)
          pair_qty_columns++;
      }

      average_row[i] += matrix[i][j];
      average_colums[j] += matrix[i][j];
    }
  }

  for (int i = 0; i < ROWS; i++){
    average_row[i] /= ROWS;
    printf("Média aritmética da linha %d = %.2f\n", i, average_row[i]);
    if (average_row[i] > greatest_row_average_value) {
      greatest_row_average_value = average_row[i];
      greatest_row_average_position = i;
    }
  }
  for (int i = 0; i < ROWS; i++)
    printf("Quantidade de 0 da linha %d: %d\n", i, zero_qty_row[i]);

  for (int i = 0; i < COLUMNS; i++)
    printf("Quantidade de 0 da coluna %d: %d\n", i, zero_qty_column[i]);

  printf("A quantidade de pares na linha %d é: %d\n", pair_row, pair_qty_rows);
  printf("A quantidade de pares na coluna %d é:  %d\n", pair_column, pair_qty_columns);
  printf("A maior média é %d na linha %.2f\n",
    greatest_row_average_value, greatest_row_average_position);

  return 0;
}
