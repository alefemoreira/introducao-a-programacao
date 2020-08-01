#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define CAR_QTY 10

int main(int argc, char const *argv[]) {
  float consumption[CAR_QTY], lower_consumption = 0;
  unsigned char lower_consumption_cod;

  setlocale(LC_ALL, "Portuguese");

  for(int i = 0; i < CAR_QTY; i++) {
    printf("Insira o consumo, em Km/L, do carro de cód. %2d: ", i+1);
    scanf("%f", &consumption[i]);
    
    printf("O carro de cód. %2d, gasta %.2f Litros para percorer 1000 Km\n", i+1, (1000/consumption[i]));
    if (consumption[i] > lower_consumption){
      lower_consumption = consumption[i];
      lower_consumption_cod = i+1;
    }
    printf("\n");
  }

  printf("O carro mais econômico é o carro de cód. %d\n", (int)lower_consumption_cod);
  printf("Com %.2f Km/L de consumo\n", lower_consumption);

  return 0;
}