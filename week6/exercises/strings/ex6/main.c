#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
  char str[MAX], letter;

  printf("Digite uma palavra: ");
  scanf("%100[^\n]", &str);

  printf("Digite uma letra para apagar (case-sensitive): ");
  scanf(" %c", &letter);

  for(int i = 0; i < strlen(str); i++)
    if (str[i] == letter)
      str[i] = ' ';

  printf("Resultado: %s\n", str);

  return 0;
}