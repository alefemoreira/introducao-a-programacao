#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum = 0;
  for(int i = 1; i <= 100; i += 1){
    sum += 2*i;
  }
  printf("A soma dos 100 primeiros pares = %d\n", sum);
  return 0;
}