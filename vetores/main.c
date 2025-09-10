#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 3


int main()
{
    int matricula[TAMANHO];
    float bimestre[TAMANHO], soma, media, aux2;
    int indice = 0; //START
    int opcao, i, output, matPesquisa;
    int Ls, aux1, Flag;

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
            if(indice == 0)
            {
                printf("Pauta Vazia.\n");
            }
            else
            {
               printf("Escolha a Matricula (XXX): ");
               scanf("%i", &matPesquisa);
               //TRATAMENTO DE ERRO:
               if(matPesquisa < 100 || matPesquisa > 999)
               {
                   printf("Matricula incorreta. Escolha novamente.\n");
               }
               else
               {
                  //PESQUISA SEQUENCIAL:
                  //RESETAR:
                  i = 0;
                  output = -1; //NÃO ENCONTRADO
                  while(i < indice)
                  {
                      if(matricula[i] == matPesquisa)
                      {
                          output = i; //VALOR ENCONTRADO
                          break;
                      }
                      i++;
                  }
                  if(output == -1)
                  {
                      printf("Matricula: %i não localizada na pauta dos alunos.\n", matPesquisa);
                  }
                  else
                  {
                      printf("Dados: Aluno localizado %i sao:\n", output + 1);
                      printf("Matricula: %i\n", matricula[output]);
                      printf("Nota Bimestre 1: %.1f\n", bimestre[output]);
                  }

               }
            }

        }
        else if(opcao == 4)
        {
            if(indice == 0)
            {
                printf("Pauta Vazia.\n");
            }
            else
            {
                //BOLHA: Resetar
                i = 0;
                Ls = indice - 1;
                do
                {
                    Flag = 0; //PAUTA ORDENADA
                    for(i = 0; i < Ls; i++)
                    {
                        if(matricula[i] > matricula[i+1])
                        {
                            //MATRICULA:
                            aux1 = matricula[i];
                            matricula[i] = matricula[i+1];
                            matricula[i+1] = aux1;
                            Flag = 1;
                            //NOTA:
                            aux2 = bimestre[i];
                            bimestre[i] = bimestre[i+1];
                            bimestre[i+1] = aux2;
                            Flag = 1;
                        }
                    }
                    Ls--;
                }while(Flag);
                printf("Pauta em ordem de matricula:\n");
                for(i = 0; i < indice; i++)
                {
                    printf("Dados do Aluno %i sao:\n", i + 1);
                    printf("Matricula: %i\n", matricula[i]);
                    printf("Nota Bimestre 1: %.1f\n\n", bimestre[i]);
                }

            }
        }
        else
        {
            printf("Relatorio 4\n");
        }
    }while(opcao != 0);





    return 0;
}
