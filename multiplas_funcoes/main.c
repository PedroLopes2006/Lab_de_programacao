#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//PROTOTIPO:
int fat(int N);

int arranjo(int N, int P);

int combinacao(int N, int P);





//FUNCOES:
int fat(int N)
{
    int valorFatorial = 1;
    int i;
    if(N == 0 || N == 1)
    {

        return 1;

    }
    for(i = 2; i <= N; i++)
    {
        valorFatorial *= i;
    }
    return valorFatorial;


}


int arranjo(int N, int P)
{

    int A;

    A = fat(N) / fat(N - P);

    return A;



}


int combinacao(int N, int P)
{

    int C;

    C = arranjo(N, P) / fat(P);

    return C;



}




//REUSABILIDADE:

int main()
{
    int opcao;
    int N, P, A, C, valorFatorial;
    printf("[1]Calcular Fatorial/ Arranjo/ Combinacao\n");
    printf("[0]Encerrar o Programa\n");

    do
    {

        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        if(opcao == 0)
        {
            printf("Programa Encerrado\n");
        }
        else if(opcao < 0 || opcao > 1)
        {
            printf("Opcao invalida\n");
        }
        else
        {

            printf("Dados de entrada:\n");
            printf("N (>=0): ");
            scanf("%i", &N);
            printf("P (>=0): ");
            scanf("%i", &P);

            if(N < 0 || P < 0)
            {
                printf("ERRO NO VALOR SELECIONADO\n");
            }
            else
            {

              printf("Resultados de saída:\n");
              valorFatorial = fat(N);
              printf("O fatorial de N e: %i\n", valorFatorial);
              valorFatorial = fat(P);
              printf("O fatorial de P e: %i\n", valorFatorial);
              A = arranjo(N, P);
              printf("O arranjo de N e P e: %i\n", A);
              C = combinacao(N, P);
              printf("Combinacao N e P: %i\n", C);




            }




        }





    }while(opcao != 0);







}
