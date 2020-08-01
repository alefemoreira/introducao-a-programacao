#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LENGTH 100

int main(int argc, char const *argv[]) {
  char vogais[] = { 'a', 'e', 'i', 'o', 'u' };
  char str[STRING_LENGTH];
  
  printf("Digite uma frase: ");
  scanf("%100[^\n]", &str);

  printf("%s\n", str);

  return 0;
}