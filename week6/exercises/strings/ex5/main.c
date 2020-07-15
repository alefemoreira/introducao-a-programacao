#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
  char str[MAX];
  int isPalindromo = 0;

  printf("Digite uma palavra: ");
  scanf("%100[^\n]", &str);

  const int STRING_LENGTH = strlen(str);

  for(int i = 0; str[i] == str[(STRING_LENGTH-1)-i]; i++)
    if(str[i] == '\0')
      isPalindromo = 1;

  if (isPalindromo == 1)
    printf("%s é um palindromo\n", str);
  else
    printf("%s não é um palindromo\n", str);

  return 0;
}