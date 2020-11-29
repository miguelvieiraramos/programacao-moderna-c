#include <stdio.h>

int main(void) {
  char c = 'A';
  printf("O tamanho da variável c é: %lu bytes e %lu bits\n", sizeof c, sizeof c * 8);
  printf("O valor de c é: %c\n", c);
  
  char d = 128;
  printf("Valor de d: %d\n", d);
  return 0;
}

