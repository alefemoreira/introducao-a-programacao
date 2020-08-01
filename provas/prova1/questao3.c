#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PERCENTAGE 100

int main(int argc, char const *argv[]) { 
  float fabrication_cost, distributor_percentage, tax_percentage, price;

  setlocale(LC_ALL, "Portuguese");
  printf("Digite o custo de fabricação: ");
  scanf("%f", &fabrication_cost);

  if (fabrication_cost <= 12000) {
    distributor_percentage = (float)5/PERCENTAGE;
    tax_percentage = 0;
  } else if (fabrication_cost > 12000 && fabrication_cost <= 25000) {
    distributor_percentage = (float)10/PERCENTAGE;
    tax_percentage = (float)15/PERCENTAGE;
  } else {
    distributor_percentage = (float)15/PERCENTAGE;
    tax_percentage = (float)20/PERCENTAGE;
  }
  
  price = fabrication_cost 
    + (fabrication_cost * distributor_percentage)
    + (fabrication_cost * tax_percentage);

  printf("Preço final: %.2f\n", price);

  return 0;
}