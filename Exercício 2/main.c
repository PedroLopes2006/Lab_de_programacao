#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L;

    printf("Calculadora da área de um quadrado\n");

    printf("Qual a medida do lado do quadrado? ");
    scanf("%f", &L);

    printf("O área do quadrado é: %f", pow(L,2));

    return 0;
}
