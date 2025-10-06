#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SALARIO_MIN 1518.01
#define SALARIO_MAX 20000.01
#define TAMANHO 1000
#define DOLAR 5.36


int main()
{
    float pesquisaSalarial[TAMANHO];
    int opcao;
    int i;
    int contador;
    int Flag, aux;

    srand(time(NULL));

    for(i=0; i < TAMANHO; i++)
    {
        float aleatorio = (float)rand() / RAND_MAX;
        pesquisaSalarial[i] = SALARIO_MIN + aleatorio *(SALARIO_MAX - SALARIO_MIN);
        pesquisaSalarial[i] = round(pesquisaSalarial[i] * 100.0)/ 100.0;
    }

    printf("ESCOLHA UM RELATORIO:\n");
    printf("[1]Relatorio 12\n");
    printf("[2]Relatorio 13\n");
    printf("[3]Relatorio 14\n");
    printf("[4]Relatorio 16\n");
    printf("[0]ENCERRAR PROGRAMA\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%d", &opcao);
        if(opcao == 0)
        {
            printf("Fim do programa\n");
        }
        else if(opcao < 1 || opcao > 4)
        {
            printf("Opcao Invalida\n");
        }
        else if(opcao == 1)
        {
            //RELATORIO 12:
            float soma_pares = 0;
            int contador_pares = 0;
            for(i = 0; i < TAMANHO; i++)
            {
                if(i % 2 == 0)
                {
                    soma_pares += pesquisaSalarial[i];
                    contador_pares++;
                }

            }
            printf("A medial salarial dos indices pares e: %.2f\n", soma_pares / contador_pares);
        }
        else if(opcao == 2)
        {
            //RELATORIO 13:
            contador = 0;
            for(i = 0; i < TAMANHO; i++)
            {
                if(pesquisaSalarial[i] > SALARIO_MIN * 10)
                {
                    contador++;
                    printf("[%d]%.2f\n", contador,pesquisaSalarial[i]);
                }
            }
        }
        else if(opcao == 3)
        {
            //RELATORIO 14:
            i = 0;
            do
            {
                Flag = 0;
                for(i = 0; i < TAMANHO - 1; i++)
                {
                    if(pesquisaSalarial[i] > pesquisaSalarial[i+1])
                    {
                        aux = pesquisaSalarial[i];
                        pesquisaSalarial[i] = pesquisaSalarial[i+1];
                        pesquisaSalarial[i+1] = aux;
                        Flag = 1;
                    }
                }

            }while(Flag);
            for(i = 0; i < 10; i++)
            {
                printf("%.2f\n", pesquisaSalarial[i]);
            }
        }
        else
        {
            //RELATORIO 16:
            i = 0;
            do
            {
                Flag = 0;
                for(i = 0; i < TAMANHO - 1; i++)
                {
                    if(pesquisaSalarial[i] < pesquisaSalarial[i+1])
                    {
                        aux = pesquisaSalarial[i];
                        pesquisaSalarial[i] = pesquisaSalarial[i+1];
                        pesquisaSalarial[i+1] = aux;
                        Flag = 1;
                    }
                }

            }while(Flag);
            for(i = 0; i < 10; i++)
            {
                printf("%.2f\n", pesquisaSalarial[i] / DOLAR);
            }
        }

    }while(opcao != 0);

    return 0;
}
