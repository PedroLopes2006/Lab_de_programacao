#include <stdio.h>
#include <math.h>


int main()
{
    printf("EXIBIDOR DE MULTIPLOS\n");

    int limInferior, limSuperior, numero, contador, resto;

    do
    {
        printf("Escolha o numero: ");
        scanf("%d", &numero);

        if(numero < 2)
        {
            printf("ERRO: O NUMERO ESCOLHIDO DEVE SER MAIOR QUE 2\n");
        }
    }while(numero<2);

    do
    {
        printf("Escolha o limite inferior: ");
        scanf("%d", &limInferior);
        if(limInferior < 0 )
        {
            printf("ERRO: O LIMITE INFERIOR DEVE SER MAIOR QUE ZERO");
        }
    }while(limInferior < 0);

    do
    {
        printf("Escolha o limite superior: ");
        scanf("%d", &limSuperior);
        if(limSuperior < 0 || limSuperior < limInferior)
        {
            printf("ERRO: O LIMITE SUPERIOR DEVE SER MAIOR QUE 0 E MAIOR QUE O LIMITE INFERIOR");
        }
    }while(limSuperior < 0 || limSuperior < limInferior);

    for(contador = limInferior; contador <= limSuperior; contador++)
    {
        resto = contador % numero;
        if(resto == 0)
        {
            printf("%d\n", contador);
        }
    }

    printf("Fim do programa\n");



    return 0;
}
