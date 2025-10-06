#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define TAMANHO 1000
#define MIN 100
#define MAX 999
#define INTERVALO (MAX - MIN -1)



int main()
{
    int opcao;
    int senha[TAMANHO];
    int i;


    srand(time(NULL));
    for(i = 0; i < TAMANHO; i++ )
    {
        senha[i] = rand() % INTERVALO + MIN;
    }


    printf("ESCOLHA UM RELATORIO:\n");
    printf("[1]RELATORIO 1\n");
    printf("[2]RELATORIO 5\n");
    printf("[3]RELATORIO 9\n");
    printf("[0]ENCERRAR PROGRAMA\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%d", &opcao);

        if(opcao == 0)
        {
            printf("Fim do programa\n");
        }
        else if(opcao < 0 || opcao > 3)
        {
            printf("ERRO: OPCAO INVALIDA\n");
        }
        else if(opcao == 1)
        {
            //RELATORIO 1:
            i = 0;
            for(i = 0; i < TAMANHO; i++)
            {
                if(senha[i] % 5 == 0)
                {
                    printf("[%d] Senha: %d\n", i, senha[i]);
                }
            }
        }
        else if(opcao == 2)
        {
            //RELATORIO 5:
            int menorImpar = -1;
            i = 0;
            for(i = 0; i < TAMANHO; i++)
            {
                if(senha[i] % 2 != 0)
                {
                    if(menorImpar == -1 || senha[i] < menorImpar)
                    {
                        menorImpar = senha[i];
                    }
                }
            }
            if(menorImpar != -1)
            {
                printf("A menor senha impar e: %d\n", menorImpar);
            }
            else
            {
                printf("Nao foi encontrado nenhuma senha impar\n");
            }
        }
        else
        {
            //RELATORIO 9:
            int chave, resultado, esquerda, direita, meio, temp;
            i = 0;

            for(i = 0; i < TAMANHO; i++)
            {
                for(int j = 0; j < TAMANHO - i - 1; j++)
                {
                    if(senha[j] > senha[j+1])
                    {
                        temp = senha[j];
                        senha[j] = senha[j+1];
                        senha[j+1] = temp;

                    }
                }
            }

            printf("Digite a senha que deseja pesquisar(XXX): ");
            scanf("%d", &chave);

            if(chave < 100 || chave > 999)
            {
                printf("ERRO: SENHA DIGITADA INVALIDA\n");
            }
            else
            {
               esquerda = 0;
               direita = TAMANHO - 1;
               resultado = -1;

               while(esquerda <= direita)
               {
                   meio = (esquerda + direita) / 2;
                   if(senha[meio] == chave)
                   {
                       resultado = meio;
                       break;
                   }
                   else if(senha[meio] < chave)
                   {
                       esquerda = meio + 1;
                   }
                   else
                   {
                       direita = meio - 1;
                   }
               }

               if(resultado != -1)
               {
                   printf("Senha %d encontrada no indice %d\n", chave, resultado);
               }
               else
               {
                   printf("Senha %d nao foi encontrada\n", chave);
               }
            }



        }


    }while(opcao != 0);

    printf("Programa encerrado\n");




    return 0;
}














