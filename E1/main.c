#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
  int N1, N2;
  printf("MINI CALCULADORA DE INTEIROS: N1 e N2\n");

  printf("VALOR DE N1: ");
  scanf("%i", &N1);

  printf("VALOR DE N2: ");
  scanf("%i", &N2);

  printf("ADIÇÃO: N1 + N2 = %i + %i = %i\n", N1, N2, N1+N2);
  printf("SUBTRAÇÃO: N1 - N2 = %i - %i = %i\n", N1, N2, N1-N2);
  printf("MULTIPLICAÇÃO: N1 X N2 = %i X %i = %i\n", N1, N2, N1*N2);
  printf("DIVISÃO: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1/N2);
  printf("QUOCIENTE(int): N1 div N2 = %i / %i = %i\n", N1, N2, N1/N2);
  printf("RESTO(int): N1 mod N2 = %i %% %i = %i\n", N1, N2, N1%N2);
  printf("POTÊNCIA: N1 elevado N2 = %i elevado %i = %.1f\n", N1, N2, pow(N1, N2));
  printf("RADICIAÇÃO: N1 raiz N2 = %i raiz %.1f = %.1f\n", N1, 1.0/N2, pow(N1, 1.0/N2));


  return 0;
}
