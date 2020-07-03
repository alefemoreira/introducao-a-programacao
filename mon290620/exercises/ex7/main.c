#include <stdio.h>
#include <stdlib.h>

int main() {
  double side1, side2, side3;

  printf("Digite o lado 1: ");
  scanf("%lf", &side1);
  printf("Digite o lado 2: ");
  scanf("%lf", &side2);
  printf("Digite o lado 3: ");
  scanf("%lf", &side3);


  if(side1 < side2 + side3 && side2 < side1 + side3 && side3 < side2 + side1) {
    if (side1 == side2 && side1 == side3) {
      printf("  Triangulo Equilátero\n");
    }

    if (side1 == side2 || side1 == side3 || side2 == side3) {
      printf("  Triangulo Isóceles\n");
    }

    if (side1 != side2 && side1 != side3 && side2 != side3 ) {
      printf("  Triangulo Escaleno\n");
    }

  } else {
    printf("Não é um triângulo\n");
  }
  
  return 0;
}