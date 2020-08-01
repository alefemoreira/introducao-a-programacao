#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define W_PER_M2 18

int main(int argc, char const *argv[]) {
  float width, length, power, area;

  setlocale(LC_ALL, "Portuguese");
  printf("Digite a largura do cômodo (em metros [m]): ");
  scanf("%f", &width);

  printf("Digite o comprimento do cômodo (em metros [m]): ");
  scanf("%f", &length);

  area = width * length;
  power = area * W_PER_M2;

  printf("A área do cômodo é: %.2f\n", area);
  printf("A potência de iluminação é: %.2f\n", power);

  return 0;
}
