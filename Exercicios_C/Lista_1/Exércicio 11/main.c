#include <stdio.h>
#include <math.h>
#define SOMATORIO 20

int main()
{
    printf("EXIBIDOR DOS 20 NUMEROS SUBSEQUENTES\n");
    int numero, i;

    printf("Escolha um numero inteiro: ");
    scanf("%d", &numero);

    printf("Os 20 numeros subsequentes sao:\n");

    for(i = numero + 1; i <= numero + SOMATORIO; i++)
    {
        printf("%d\n", i);
    }

    printf("Programa Finalizado\n");


    return 0;
}
