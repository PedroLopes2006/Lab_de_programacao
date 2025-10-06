#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 15000
#define META 68.5


int main()
{
    int matricula[TAMANHO];
    int duplicada;
    int contador;
    int horas, minutos, segundos;
    int soma, i;
    float media;
    int indice = 0;
    float tempo[TAMANHO];
    int opcao;
    int Flag, aux1, aux2, Ls;

    printf("ESCOLHA UMA OPCAO:\n");
    printf("[1]Cadastrar atleta\n");
    printf("[2]RELATORIO 19\n");
    printf("[3]RELATORIO 22\n");
    printf("[4]RELATORIO 24\n");
    printf("[0]ENCERRAR PROGRAMA\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%d", &opcao);
        if(opcao == 0)
        {
            printf("Programa encerrado\n");
        }
        else if(opcao < 0 || opcao > 4)
        {
            printf("ERRO: OPCAO INVALIDA\n");
        }
        else if(opcao == 1)
        {
            if(indice < TAMANHO)
            {
                do
                {
                    printf("DADOS DO CORREDOR: %d\n", indice + 1);
                    printf("Digite a matricula: ");
                    int novaMatricula;
                    scanf("%d", &novaMatricula);

                    duplicada = 0;
                    for(i = 0; i < indice; i++)
                    {
                        if(matricula[i] == novaMatricula)
                        {
                           duplicada = 1;
                           break;
                        }
                    }
                    if(duplicada)
                    {
                        printf("ERRO: ESSA MATRICULA JA FOI CADASTRADA\n");
                    }
                    else
                    {
                        printf("Digite o tempo em minutos: ");
                        scanf("%f", &tempo[indice]);

                        if(novaMatricula < 100)
                        {
                            printf("Matricula Invalida\n");
                        }
                        else if(tempo[indice] < 0)
                        {
                           printf("Tempo Invalido\n");
                        }
                        else
                        {
                            matricula[indice] = novaMatricula;
                            indice = indice + 1;
                        }
                    }

                }while(duplicada);

            }
            else
            {
                printf("A quantidade de corredores cadastrados chegou no limite\n");
            }
        }
        else if(opcao ==2)
        {
            //RELATORIO 19:
            if(indice == 0)
            {
                printf("Nao ha nenhum corredor cadastrado\n");
            }
            else
            {
                soma = 0;
                for(i = 0; i < indice; i++)
                {
                    soma = soma + tempo[i];
                }
                media = soma / indice;
                printf("A media de tempo e: %.2f", media);
            }
        }
        else if(opcao == 3)
        {
            //RELATORIO 22:
            horas = floor((META/60));
            minutos = floor(((META/60) - horas)* 60);
            segundos = ceil(((((META/60) - horas)*60)- minutos)*60);
            printf("Meta da prova: %02d:%02d:%02d HH:MM:SS\n", horas, minutos, segundos);

            contador = 0;
            if(indice == 0)
            {
                printf("Nao existem tempos cadastrados");
            }
            else
            {
                for(i = 0; i < indice; i++)
                {
                  if(tempo[i] < META)
                  {
                      contador++;
                      printf("[%d] Matricula:%d Tempo: %.2f minutos\n", contador, matricula[i], tempo[i]);
                  }
                }
            }


        }
        else
        {
            //RELATORIO 24:

            i = 0;
            Ls = indice - 1;
            do
            {
                Flag = 0;
                for(i = 0; i < Ls; i++)
                {
                    if(tempo[i] > tempo[i+1])
                    {

                        aux1 = tempo[i];
                        tempo[i] = tempo[i+1];
                        tempo[i+1] = aux1;
                        Flag = 1;

                        aux2 = matricula[i];
                        matricula[i] = matricula[i+1];
                        matricula[i+1] = aux2;
                        Flag = 1;

                    }
                }
                Ls--;

            }while(Flag);

            for(i = 0; i < 10 && i < indice; i++)
            {
                printf("[%d] Matricula: %d Tempo: %.2f\n", i + 1, matricula[i], tempo[i]);
            }

        }






    }while(opcao != 0);

    printf("Fim do programa\n");


    return 0;
}
