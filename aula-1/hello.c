#include <stdio.h>

int main(void) {
  int ret = 0;

  ret = printf("Hello World\n");
  printf("o resultado a printf() anterior é: %d\n", ret);
  printf("%d - %d - %d - %d\n", ret, 10, 0x0a, 'A');//O %d pega qualquer valor e transforma para decimal caso nao seja
  printf("%x - %x\n", 'H', 65); //O "%x" pega o valor e transforma para hexadecimal
  printf("%c\n", 0x40); //transforma para caractere (devemos olhar a tabela ascii para entender melhor)
  return 0;
}

