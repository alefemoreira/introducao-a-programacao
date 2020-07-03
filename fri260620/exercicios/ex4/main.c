#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
  float height, radius, area, volume;

  printf("Digite a altura do cilindro: ");
  scanf("%f", &height);
  printf("Digite o raio da base do cilindro: ");
  scanf("%f", &radius);

  area = 2 * PI * radius * (height + radius);
  volume = PI * radius * radius * height;

  printf("\nÁrea do cilindro: %.2f\n", area);
  printf("Volume do cilindro: %.2f\n", volume);

  return 0;
}