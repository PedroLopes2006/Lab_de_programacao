#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L;

    printf("Calculadora da �rea de um quadrado\n");

    printf("Qual a medida do lado do quadrado? ");
    scanf("%f", &L);

    printf("O �rea do quadrado �: %f", pow(L,2));

    return 0;
}
