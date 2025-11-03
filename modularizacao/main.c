//BIBLIOTECAS + CONSTANTES:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//PROTÓTIPOS:
float distanciaPeQ(float Px, float Py, float Qx, float Qy);




//FUNCOES: ABSTRAÇÃO + ENCAPSULAMENTO
float distanciaPeQ(float Px, float Py, float Qx, float Qy)
{
    float distancia;
    distancia = sqrt(pow(Px - Qx, 2) + pow(Py - Qy, 2));
    return distancia;
}





//GUI (i/O): REUSABILIDADE

int main()
{
    float Px, Py, Qx, Qy;
    float distancia;
    int opcao;

    printf("[1] Calcular distancia\n");
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
            //REUSABILIDADE: I / O
            printf("Dados do Ponto P(x, y):\n");
            printf("Cordenada X - Ponto P: ");
            scanf("%f", &Px);
            printf("Cordenada Y - Ponto P: ");
            scanf("%f", &Py);
            printf("Cordenada X - Ponto Q: ");
            scanf("%f", &Qx);
            printf("Cordenada Y - Ponto Q: ");
            scanf("%f", &Qy);

            distancia = distanciaPeQ(Px, Py, Qx, Qy);
            printf("A distancia entre os pontos e: %.1f\n", distancia);

        }

    }while(opcao != 0);





    return 0;
}
