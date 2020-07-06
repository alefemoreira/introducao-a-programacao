#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double a, b, c, delta, x1, x2;

  printf("Digite o coeficiente \"a\": ");
  scanf("%lf", &a);
  printf("Digite o coeficiente \"b\": ");
  scanf("%lf", &b);
  printf("Digite o coeficiente \"c\": ");
  scanf("%lf", &c);

  delta = pow(b, 2) - 4 * a * c;
  printf("Δ: %lf\n", delta);

  if (delta < 0) {
    printf("Não existe solução real para essa equação\n");
  } else if (delta == 0) {
    x1 = x2 = -b / (2 * a);
    printf("2 soluções iguais:\n");
    printf("  x\' = x\'\' %.2lf\n", x1);
  } else if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x\' = %lf; x\'\' = %lf\n", x1, x2);
  }
  

  return 0;
}