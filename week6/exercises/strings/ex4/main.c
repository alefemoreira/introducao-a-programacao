#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char str[100], letter;
  int counter = 0, position = 0;

  printf("Digite uma palavra: ");
  scanf("%100[^\n]", &str);

  printf("Digite uma letra para contar (case-sensitive): ");
  // letter = getchar();
  scanf(" %c", &letter);

  for(int i = 0; i < strlen(str); i++) {
    if(str[i] == letter)
      counter++;
  }

  int indexes[counter+1];

  for(int i = 0; i < strlen(str); i++) {
    if(str[i] == letter) {
      indexes[position] = i;
      position++;
    }
    
    if(position == counter)
      indexes[counter] = -1;
  }

  printf("\n{ ");
  for(int i = 0; i < counter+1; i++) 
    printf("%d ", indexes[i]);
  printf("}\n");

  return 0;
}
