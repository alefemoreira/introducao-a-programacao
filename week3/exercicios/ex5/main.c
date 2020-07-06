#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
  float radius, area;

  printf("Digite o raio de um circulo: ");
  scanf("%f", &radius);

  area = PI * radius * radius;

  printf("\nA área do ciruclo é: %.2f\n", area);

  return 0;
}