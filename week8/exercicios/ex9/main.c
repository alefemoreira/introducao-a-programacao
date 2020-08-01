#include <stdio.h>
#include <stdlib.h>

int isTriangle(float sideA, float sideB, float sideC);
int typeOfTriangle(float sideA, float sideB, float sideC);

int main(int argc, char const *argv[]) {
  float a, b, c;
  int triangleType;

  printf("Insire o valor do lado a: ");
  scanf("%f", &a);
  printf("Insire o valor do lado b: ");
  scanf("%f", &b);
  printf("Insire o valor do lado c: ");
  scanf("%f", &c);

  triangleType = typeOfTriangle(a, b, c);

  if (triangleType == 0)
    printf("O triangulo é equilátero");
  else if (triangleType == 1)
    printf("O triangulo é isóceles");
  else if (triangleType == 2)
    printf("O triangulo é escaleno");
  else
    printf("Não é triangulo");
  

  printf("\n");
  return 0;
}

int isTriangle(float sideA, float sideB, float sideC) {
  if (sideA < (sideB + sideC))
    if (sideB < (sideA + sideC))
      if (sideC < (sideA + sideB))
        return 1;
    
  return 0;
}

int typeOfTriangle(float sideA, float sideB, float sideC) {
  if (isTriangle(sideA, sideB, sideC)) {
    if (sideA == sideB && sideB == sideC)
      return 0;
    
    if (sideA == sideB || sideA == sideC || sideB == sideC)
      return 1;

    if (sideA != sideB && sideA != sideC && sideB != sideC)
      return 2;
  }

  return -1;
}
