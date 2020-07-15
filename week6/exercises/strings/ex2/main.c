#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define VOGAIS_LENGTH 5

int main() {
  char str[100], letter;
  char vogais[] = { 'a', 'e', 'i', 'o', 'u' };
  int counter = 0;

  printf("Digite uma frase: ");
  scanf("%100[^\n]", &str);

  for(int i = 0; i < strlen(str); i++) {
    for(int j = 0; j < VOGAIS_LENGTH; j++) {
      if (tolower(str[i]) == vogais[j])
        str[i] = '*';
    }
  }

  printf("Final: %s\n", str);

  return 0;
}