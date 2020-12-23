#include <stdio.h>

int main(void) {
  int c[3];
  c[0] = 2;
  c[1] = 4;
  c[2] = 8;
  unsigned int quantity_elements = sizeof c / sizeof c[0];
  printf("Tamanho de c: %zu\n", sizeof c);
  printf("Quantidade de elementos: %u\n", quantity_elements);

  for (int i = 0; i < quantity_elements; i++) {
    printf("Elemento do array na posicao %d: %d\n", i, c[i]);
    printf("O endereco da posicao %d do array c: %p\n", i, &c[i]);
  }
  return 0;
}
