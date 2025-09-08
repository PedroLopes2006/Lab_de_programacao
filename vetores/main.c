#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50


int main()
{
    int matricula[TAMANHO];
    float bimestre[TAMANHO], soma, media;
    int indice = 0;
    int opcao, i;

    printf("MENU DE OPCOES:\n");
    printf("[1] Cadastrar o aluno\n");
    printf("[2] Relatorio 1: Exibir Media do Bimestre 1.\n");
    printf("[3] Relatorio 2: Pesquisar/Exibir os Dados de um Aluno por sua Matrícula (XXX).\n");
    printf("[4] Relatorio 3: Exibir os dados ordenados por Matrícula.\n");
    printf("[5] Relatorio 4: Pesquisar/Exibir os Dados de um Aluno por sua Matrícula (XXX).\n");
    printf("[0] Fim do programa.\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%i", &opcao);
        if(opcao == 0)
        {
            printf("Fim do programa\n");
        }
        else if(opcao < 0 || opcao > 5)
        {
            printf("Opcao incorreta\n");
        }
        else if(opcao == 1)
        {
            if(indice < TAMANHO)
            {
                //ENUMERAR:
                printf("Dados do aluno %i: ", indice + 1);
                printf("Matricula (XXX): ");
                scanf("%i", &matricula[indice]);
                printf("Nota (0.0 - 10.0): ");
                scanf("%f", &bimestre[indice]);
                //TRATAMENTO DE ERRO:
                if(matricula[indice] < 100 || matricula[indice] > 999)
                {
                    printf("ERRO: Matricula incorreta. Escolha de novo.\n");
                }
                else if(bimestre[indice] < 0.0 || bimestre[indice] > 10.0)
                {
                    printf("ERRO: Nota incorreta. Escolha de novo.\n");
                }
                else
                {
                    indice = indice + 1;// ITERAR: step
                }
            }
            else
            {
                printf("Turma Lotada. Nao e possivel mais cadastros\n");
            }
        }
        else if(opcao == 2)
        {
            if(indice == 0)
            {
                printf("Turma vazia\n");
            }
            else
            {
               soma = 0; //RESETAR
               for(i = 0; i < indice; i++)
               {
                soma = soma + bimestre[i];
               }
               media = soma / indice;
               printf("Media do Bimestre 1: %.1f\n", media);
            }
        }
        else if(opcao == 3)
        {
            printf("Relatorio 2\n");
        }
        else if(opcao == 4)
        {
            printf("Relatorio 3\n");
        }
        else
        {
            printf("Relatorio 4\n");
        }
    }while(opcao != 0);





    return 0;
}
