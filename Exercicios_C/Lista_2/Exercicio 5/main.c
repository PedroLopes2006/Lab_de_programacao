#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 50

//33,34,35,38,39

int main()
{

    int opcao;
    int codigo[TAMANHO];
    float preco[TAMANHO], quantidade[TAMANHO];
    int indice = 0;
    float total = 0;
    int i;
    int Ls, Flag, aux1;
    float aux2, aux3;


    printf("ESCOLHA UMA OPCAO:\n");
    printf("[1]Cadastrar produto\n");
    printf("[2]RELATORIO 33\n");
    printf("[3]RELATORIO 34\n");
    printf("[4]RELATORIO 35\n");
    printf("[5]RELATORIO 38\n");
    printf("[6]RELATORIO 39\n");
    printf("[0]ENCERRAR PROGRAMA\n");

    do
    {
        printf("Sua opcao: ");
        scanf("%d", &opcao);
        if(opcao == 0)
        {
            printf("Programa Encerrado");
        }
        else if(opcao < 0 || opcao > 6)
        {
            printf("ERRO: OPCAO INVALIDA, ESCOLHA NOVAMENTE\n");
        }
        else if(opcao == 1)
        {
            if(indice < TAMANHO)
            {
               printf("Dados do produto:\n");
               printf("Codigo do produto (XXX): ");
               scanf("%d", &codigo[indice]);
               printf("Preco produto: ");
               scanf("%f", &preco[indice]);
               printf("Quantidade do produto: ");
               scanf("%f", &quantidade[indice]);

               if(codigo[indice] < 100 || codigo[indice] > 999)
               {
                   printf("ERRO: CODIGO INVALIDO\n");
               }
               else if(preco[indice] < 0.25)
               {
                   printf("ERRO: O PRECO DEVE SER MAIOR QUE R$ 0.25\n");
               }
               else if(quantidade[indice] <= 0)
               {
                   printf("ERRO: A QUANTIDADE DEVE SER MAIOR QUE ZERO");
               }
               else
               {
                   indice = indice + 1;
               }





            }
        }
        else if(opcao == 2)
        {
            i = 0;
            total = 0;
            if(indice == 0)
            {
              printf("Nao ha produtos cadastrados\n");
            }
            else
            {
                //RELATORIO 33:

               for(i = 0; i < indice; i++)
               {
                   if(quantidade[i] > 1)
                   {
                       total = total + (preco[i] * quantidade[i]);
                   }
                   else
                   {
                       total = total + preco[i];
                   }
               }
               printf("O total a se pagar e: %.2f\n", total);
            }
        }
        else if(opcao == 3)
        {
            if(indice == 0)
            {
                printf("Nao ha produtos cadastrados\n");
            }
            else
            {
                //RELATORIO 34:

               i = 0;
               for(i = 0; i < indice; i++)
               {
                   if(preco[i] > 50.0)
                   {
                       printf("[%d] Codigo: %d Preco: %.2f Quantidade: %.1f\n", i + 1, codigo[i], preco[i], quantidade[i]);
                   }
               }
            }
        }
        else if(opcao == 4)
        {
            if(indice == 0)
            {
                printf("Nao ha produtos cadastrados\n");
            }
            else
            {
                //RELATORIO 35:

               total = 0;
               i = 0;
               for(i = 0; i < indice; i++)
               {
                   if(quantidade[i] > 1)
                   {
                       if(preco[i] > 25.99)
                       {
                           total = total + (quantidade[i] * (preco[i]-(preco[i] * 0.02)));
                       }
                       else
                       {
                           total = total + (quantidade[i] * preco[i]);
                       }
                   }
                   else
                   {
                       total = total + preco[i];
                   }
               }
               printf("O total a ser pago com descontos e: %.2f\n", total);
            }
        }
        else if(opcao == 5)
        {

            if(indice == 0)
            {
                printf("Nao ha produtos cadastrados\n");
            }
            else
            {
                //RELATORIO 38:
                i = 0;
                Ls = indice - 1;
                do
                {
                    Flag = 0;
                    for(i = 0; i < Ls; i++)
                    {
                        if(codigo[i] > codigo[i+1])
                        {
                            aux1 = codigo[i];
                            codigo[i] = codigo[i+1];
                            codigo[i+1] = aux1;
                            Flag = 1;

                            aux2 = preco[i];
                            preco[i] = preco[i+1];
                            preco[i+1] = aux2;
                            Flag = 1;

                            aux3 = quantidade[i];
                            quantidade[i] = quantidade[i+1];
                            quantidade[i+1] = aux3;
                            Flag = 1;
                        }
                    }
                    Ls--;

                }while(Flag);
                for(i = 0; i < indice; i++)
                {
                    printf("[%d] Codigo: %d Preco: %.2f Quantidade: %.2f\n", i+1, codigo[i], preco[i], quantidade[i]);
                }


            }

        }
        else
        {
            if(indice == 0)
            {
                printf("Nao ha produtos cadastrados\n");
            }
            else
            {
                //RELATORIO 39:
                i = 0;
                total = 0;
                for(i = 0; i < indice; i++)
                {
                    if(quantidade[i] > 1)
                    {
                        total = total + (quantidade[i]*(preco[i] + (preco[i] * 0.01)));
                    }
                    else
                    {
                        total = total + (preco[i] + (preco[i] * 0.01));
                    }
                }
                printf("O total a ser pago com acrescimos e: %.2f\n", total);
            }
         }







    }while(opcao != 0);

    printf("FIM DO PROGRAMA\n");


     return 0;
}
