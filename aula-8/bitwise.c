#include <stdio.h>

int main(void) {
  char a = 0b00001010;
  printf("O numero é: %d\n", a);
  printf("a & 3 eh: %d\n", a & 3);
  printf("a | 7 eh: %d\n", a | 7);
  printf("a ^ 7 eh: %d\n", a ^ 7);
  printf("~a eh: %d\n", ~a);
  printf("a >> 1: %d\n", a >> 1);
  printf("a << 1: %d\n", a << 1);
}

