#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;
  b = true;
  printf("O tamanho de b é: %zu\n", sizeof b);
  printf("O valor de b é: %u\n", b);

  return 0;
}
