#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100], letter;
  int counter = 0;

  printf("Digite uma palavra: ");
  scanf("%100[^\n]", &str);

  printf("Digite uma letra para contar (case-sensitive): ");
  // letter = getchar();
  scanf(" %c", &letter);

  for(int i = 0; i < strlen(str); i++) {
    if(str[i] == letter) {
      counter++;
    }
  }

  printf("\nExistem %d de \"%c\" na string\n", counter, letter);

  return 0;
}