#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int B, C;

    printf("Calculador da hipotenusa 'A' de um triângulo retângulo\n");

    printf("Valor de B: ");
    scanf("%i", &B);

    printf("Valor de C: ");
    scanf("%i", &C);

    printf("O valor da hipotenusa 'A' é: %.2f", pow(pow(B,2)+pow(C,2), 1.0/2));

    return 0;
}
