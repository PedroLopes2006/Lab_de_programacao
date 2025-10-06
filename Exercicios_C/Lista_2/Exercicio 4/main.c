#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 100

//27,28,30,31,32

int main()
{

    int opcao, sexo[TAMANHO];
    float nota[TAMANHO];
    int indice = 0;
    float soma, media;
    int i, contador;
    int aux1, Ls, Flag;
    float aux2;
    int masculino, feminino;
    float pmasculino, pfeminino;


    printf("ESCOLHA UMA OPCAO:\n");
    printf("[1]Cadastrar aluno\n");
    printf("[2]RELATORIO 27\n");
    printf("[3]RELATORIO 28\n");
    printf("[4]RELATORIO 30\n");
    printf("[5]RELATORIO 31\n");
    printf("[6]RELATORIO 32\n");
    printf("[0]ENCERRAR PROGRAMA\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%d", &opcao);

        if(opcao == 0)
        {
            printf("Programa Encerrado\n");
        }
        else if(opcao < 0 || opcao > 6)
        {
            printf("ERRO: OPCAO INVALIDA\n");
        }
        else if(opcao == 1)
        {

            if(indice < TAMANHO)
            {
                printf("Dados do aluno:\n");
                printf("Media semestral: ");
                scanf("%f", &nota[indice]);
                printf("Sexo:\n");
                printf("[1]Masculino\n");
                printf("[2]Feminino\n");
                scanf("%d", &sexo[indice]);

                if(nota[indice] < 0.0 || nota[indice] > 10.0)
                {
                    printf("Nota invalida\n");
                }
                else if(sexo[indice] != 1 && sexo[indice] != 2)
                {
                    printf("Sexo invalido\n");
                }
                else
                {

                    indice = indice + 1;

                }
            }
        }
        else if(opcao == 2)
        {
            if(indice == 0)
            {
                printf("Nao ha alunos cadastrados\n");
            }
            else
            {
                //RELATORIO 27:


               for(i = 0; i < indice; i++)
               {
                   if(sexo[i] == 2)
                   {
                       soma = soma + nota[i];
                       contador++;

                   }

               }
               media = soma / contador;
               printf("A media dos estudantes do sexo feminino e: %.2f\n", media);
            }

        }
        else if(opcao == 3)
        {
            if(indice == 0)
            {
                printf("Nao ha alunos cadastrados\n");
            }
            else
            {
                //RELATORIO 28:


               i = 0;
               Ls = indice - 1;
               do
               {
                   Flag = 0;
                   for(i = 0; i < Ls; i++)
                   {
                       if(nota[i] < nota[i+1])
                       {
                           aux1 = nota[i];
                           nota[i] = nota[i+1];
                           nota[i+1] = aux1;
                           Flag = 1;

                           aux2 = sexo[i];
                           sexo[i] = sexo[i+1];
                           sexo[i+1] = aux2;
                           Flag = 1;
                       }
                   }
                   Ls --;

                }while(Flag);

               for(i = 0; i <indice; i++)
               {
                   if(sexo[i] == 1)
                   {
                       printf("A maior media final de um estudante com sexo masculino e: %.1f\n", nota[i]);
                       break;
                   }
               }
            }

        }
        else if(opcao == 4)
        {
            if(indice == 0)
            {
                printf("Nao ha alunos cadastrados\n");
            }
            else
            {
                //RELATORIO 30:

               i = 0;
               contador = 0;
               for(i = 0; i < indice; i++)
               {
                   if(nota[i] >= 3 && nota[i] < 7)
                   {
                      contador++;
                   }
               }
               printf("A quantidade de alunos com notas no intervalo [3.0,7.0[ e: %d\n", contador);
            }
        }
        else if(opcao == 5)
        {
            i = 0;
            contador = 0;
            media = 0;
            if(indice == 0)
            {
                printf("Nao ha alunos cadastrados\n");
            }
            else
            {
                //RELATORIO 31:
                for(i = 0; i < indice; i++)
               {
                       soma = soma + nota[i];
               }
               media = soma / indice;
               for(i = 0; i < indice; i++)
               {
                   if(nota[i] > media)
                   {
                       contador++;
                   }
               }
               printf("O numero de alunos que ficaram acima da media da turma e: %d\n", contador);

            }
        }
        else
        {
            if(indice == 0)
            {
                printf("Nao ha alunos cadastrados\n");
            }
            else
            {
                //RELATORIO 32:
                masculino = 0;
                feminino = 0;
                i = 0;
                for(i = 0; i < indice; i++)
                {
                    if(sexo[i] == 1)
                    {
                        masculino++;
                    }
                    else
                    {
                        feminino++;
                    }
                }

                pmasculino = (masculino * 100.0)/indice;
                pfeminino = (feminino*100.0)/indice;

                printf("Masculino: %d alunos (%.2f%%)\n", masculino, pmasculino);
                printf("Feminino: %d alunas (%.2f%%)\n", feminino, pfeminino);

            }
        }




    }while(opcao != 0);

    return 0;
}
