#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 100

int main() {
  char str[MAX], letter;
  int isPalindromo = 0, pos;
  srand((unsigned)time(NULL));

  printf("Digite uma palavra: ");
  scanf("%100[^\n]", &str);

  int STRING_LENGTH = strlen(str);

  for (int i = 0; i < STRING_LENGTH; i++) {
    pos = rand() % STRING_LENGTH;

    if (i % 2 == 0)
      str[pos] = toupper(str[pos]);
    else
      str[pos] = tolower(str[pos]);
  }

  printf("Resultado: %s\n", str);

  return 0;
}