#include <stdio.h>
#include <stdlib.h>

void converterSegsToTime(int segs) {
  int hours = segs / (60 * 60);
  int rest = segs % (60 * 60);
  int minutes = rest / 60;
  rest = rest % 60;

  printf("%dh %dm %ds\n", hours, minutes, rest);
}

int main(int argc, char const *argv[]) {
  int segs;

  printf("Digite o valor em segundos: ");
  scanf("%d", &segs);

  converterSegsToTime(segs);

  return 0;
}