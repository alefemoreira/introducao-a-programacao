#include <stdio.h>
#include <stdlib.h>

float idealWeightByGender(float height, int gender);
float idealMaleWeight(float height);
float idealFemaleWeight(float height);

int main(int argc, char const *argv[]) {
  float height, idealWeight;
  int gender;

  printf("Digite sua altua: ");
  scanf("%f", &height);
  printf("Digite seu sexo [\n1 - Masculino\n2 - Feminino\n]: ");
  scanf("%d", &gender);

  idealWeight = idealWeightByGender(height, gender);

  printf("O seu peso ideal é: %.2f\n", idealWeight);

  return 0;
}

float idealWeightByGender(float height, int gender) {
  if (gender == 1)
    return idealMaleWeight(height);
  else
    return idealFemaleWeight(height);
  
}

float idealFemaleWeight(float height) {
    return 62.1 * height - 44.7;
}

float idealMaleWeight(float height) {
  return 72.7 * height - 58;
}


