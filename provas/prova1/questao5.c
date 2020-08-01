#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]) { 
  unsigned int radio_type;
  int qty_standard_sold, qty_luxury_sold, total_standard = 0, total_luxury = 0;

  setlocale(LC_ALL, "Portuguese");

  do {
    printf("Digite o tipo do rádio [0 para sair]: ");
    scanf("%d", &radio_type);

    if(radio_type != 0) {
      printf("Digite a quantidade de peças vendidas: ");

      if (radio_type == 1) {
        scanf("%d", &qty_standard_sold);
        total_standard += qty_standard_sold;
      } else {
        scanf("%d", &qty_luxury_sold);
        total_luxury += qty_luxury_sold;
      }
    }
  } while (radio_type != 0);

  printf("Total de peças vendidas: %d\n", total_luxury+total_standard);
   
  return 0;
}