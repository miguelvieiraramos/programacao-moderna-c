#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
  int i = INT_MAX;
  unsigned int b = UINT_MAX;
  uint16_t ushort = SHRT_MAX;
  unsigned short c;
  long d = LONG_MAX;

  printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i *8);
  printf("Valor de i: %d\n", i); 
  
  printf("Valor de b: %u\n", b);

  printf("O tamanho de ushort (uint16_t): %zu bytes / %zu bits\n", sizeof ushort, sizeof ushort *8);
  printf("O tamanho de c (short): %zu bytes / %zu bits\n", sizeof c, sizeof c *8);
  printf("O tamanho de d (long): %zu bytes / %zu bits\n", sizeof d, sizeof d *8);
  printf("Valor de d: %ld\n", d);
  return 0;
}

