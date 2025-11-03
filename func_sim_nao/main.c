#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//PROTOTIPOS:
int numeroPerfeito(int numero);



//FUNCOES:
int numeroPerfeito(int numero)
{
    int contador = 1, soma = 1;
    if(contador == 1)
    {
        return 1;
    }
    for(contador = 2; contador <= numero/2; contador++)
    {
        if(numero % contador == 0)
        {
            soma += contador;
        }
    }
    if(soma == numero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}





//GUI (I/O):

int main()
{
    int numero;
    int opcao;

    printf("[1] Testar um numero\n");
    printf("[0] Encerrar Programa\n");
    do
    {
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);
        if(opcao == 0)
        {
            printf("Fim do Programa\n");
        }
        else if(opcao < 0 || opcao > 1)
        {
            printf("ERRO: SELECIONE UMA OPCAO VALIDA\n");
        }
        else
        {
            printf("Escolha um numero inteiro: ");
            scanf("%i", &numero);
            if(numero < 1)
            {
                printf("ESCOLHA UM NUMERO MAIOR OU IGUAL A 1\n");
            }
            else
            {
                if(numeroPerfeito(numero))
                {

                    printf("O numero %i e perfeito\n", numero);

                }
                else
                {
                    printf("O numero nao e perfeito\n");
                }
            }




        }

    }while(opcao != 0);





    return 0;
}
