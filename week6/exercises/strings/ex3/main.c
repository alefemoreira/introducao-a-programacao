#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
// #define MAX_LENGTH "%100[^\n]"

int main() {
  char str[MAX];
  int counter = 0;

  printf("Digite uma frase: ");
  scanf("%MAX[^\n]", &str);
  
  const int STRING_LENGTH = strlen(str);

  for (int i = 0; i < STRING_LENGTH; i++){
    if(str[i] == ' ')
      counter++;
  }

  printf("Existem %d palavras\n", counter+1);

  return 0;
}