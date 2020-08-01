#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *rootSecondDegreeEq(float a, float b, float c);
float delta(float a, float b, float c);

int main() {
  float * roots;
  float a, b, c;

  printf("Digite o termo A: ");
  scanf("%f", &a);
  printf("Digite o termo B: ");
  scanf("%f", &b);
  printf("Digite o termo C: ");
  scanf("%f", &c);

  roots = rootSecondDegreeEq(a, b, c);

  printf("x' = %.2f x\" = %.2f\n", roots[0], roots[1]);

  return 0;
}

float *rootSecondDegreeEq(float a, float b, float c) {
  float *roots;

  roots = malloc(2 * sizeof(float));

  float root1 = ((-b) + sqrt( (double)delta(a, b, c) )) / (2 * a);
  float root2 = ((-b) - sqrt( (double)delta(a, b, c) )) / (2 * a);

  roots[0] = root1;
  roots[1] = root2;

  return roots;
}

float delta(float a, float b, float c) {
  float delta = (b * b) - (4 * a * c);
  return delta;
}
