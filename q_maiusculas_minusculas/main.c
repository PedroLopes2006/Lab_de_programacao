#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 1000


void contadorLetras(char texto[TAMANHO], int *Q1, int *Q2);




void contadorLetras(char texto[TAMANHO], int *Q1, int *Q2)
{

    int indice = 0;
    //RESET:
    *Q1 = 0;
    *Q2 = 0;
    //PERCORRER TODO UM TEXTO:
    //Q1: Letras Minúsculas: 'a' a 'z'
    //Q2: Letras Maiúsculas: 'A' a 'Z'
    while(texto[indice] != '\0')
    {
        //Letras Minúsculas: 'a' a 'z'
        if(texto[indice] >= 'a' && texto[indice] <= 'z')
        {
            *Q1 = (*Q1) + 1;
        }
        else if(texto[indice] >= 'A' && texto[indice] <= 'Z')
        {
            *Q2 = (*Q2) + 1;
        }
        indice++;
    }




}






int main()
{
    char texto[TAMANHO];//PONTEIRO FIXO
    int Q1, Q2;

    do
    {
        printf("Entre com um texto qualquer: ");
        scanf("\n%[^\n]", texto);

        if(strcmp(texto, "SAIR") == 0 || strcmp(texto, "sair") == 0)
        {
            printf("Programa Encerrado\n");
        }
        else
        {
            //REUSABILIDADE:
            contadorLetras(texto, &Q1, &Q2);
            printf("Texto: %s\n", texto);
            printf("Quantidade de letras Minusculas: %i\n", Q1);
            printf("Quantidade de letras Maiusculas: %i\n", Q2);

        }



    }while(strcmp(texto, "SAIR") != 0 && strcmp(texto, "sair") != 0);



    return 0;
}
