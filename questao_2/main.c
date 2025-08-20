#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("CALCULADORA DE PESO IDEAL\n");

    float altura;
    int genero;

    printf("Qual seu genero?(H = 1/M = 2) ");
    scanf("%d", &genero);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    if(altura > 0)
    {
        if(genero == 1)
        {
            printf("Seu peso ideal é: %.2f", (72.7*altura) - 58);
        }
        else if(genero == 2)
        {
            printf("Seu peso ideal é: %.2f", (62.1*altura) - 44.7);
        }
        else
        {
            printf("Genero selecionado invalido");
        }
    }
    else
    {
        printf("altura selecionada invalida");
    }


    return 0;
}
