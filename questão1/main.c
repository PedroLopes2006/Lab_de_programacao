#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("CALCULADORA DE PERIMETROS\n");
    float base, altura, calc_perimetro;

    printf("Qual o tamanho da base(CM)? ");
    scanf("%f", &base);

    printf("Qual a altura(CM)? ");
    scanf("%f", &altura);

    if(base > 0 && altura > 0)
    {
        calc_perimetro = (2 * base + 2 * altura);

    printf("O perimetro em cm sera: %.2f\n", calc_perimetro);
    printf("O perimetro em polegadas sera: %.2f\n", calc_perimetro / 2.54);
    printf("O perimetro em jardas sera: %.2f\n", calc_perimetro * 0.011);
    }
    else
    {
        printf("Dados inseridos estao invalidos\n");
    }


    return 0;
}
