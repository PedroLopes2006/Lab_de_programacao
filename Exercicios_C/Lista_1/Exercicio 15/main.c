#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Porcentagem de positivos e negativos\n");

    float numero;
    int positivos, negativos, total;

    do
    {
        printf("Digite um numero (0 para parar o programa): ");
        scanf("%f", &numero);

        if(numero > 0)
        {
            positivos++;
        }
        else if(numero < 0)
        {
            negativos++;
        }
        else
        {
            printf("Finalizando o programa\n");
        }

    }while(numero != 0);

    total = positivos + negativos;

    printf("Porcentagem final:\n");
    if(total > 0)
    {
        float pPositivos = (positivos*100.0)/total;
        float pNegativos = (negativos*100.0)/total;

        printf("Porcentagem de numeros positivos: %.2f%%\n", pPositivos);
        printf("Porcentagem de numeros negativos: %.2f%%\n", pNegativos);

    }
    else
    {
        printf("Nao foi digitado nengum numero\n");
    }




    return 0;
}
