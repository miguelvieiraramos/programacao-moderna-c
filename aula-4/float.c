#include <stdio.h>

int main(void) {
  float f = 10.32435;
  double d = 1;
  long double ld = 2;
  //float f = 3e2; //3 * 10^2
  printf("O tamanho de f (float): %zu bytes/ %zu bits\n", sizeof f, sizeof f * 8);
  printf("Valor de f: %.3f\n", f);
  printf("O tamanho de d (double): %zu bytes/ %zu bits\n", sizeof d, sizeof d * 8);
  printf("Valor de d: %f\n", d);
  printf("O tamanho de ld (long double): %zu bytes/ %zu bits\n", sizeof d, sizeof d * 8);
  printf("Valor de d: %Lf\n", ld);

}
