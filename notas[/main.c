#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //ENTRADA:
    double B1, B2, PF, media;
    printf("Nota [0.0, 10.0] do Bimestre 1: ");
    scanf("%lf", &B1);
    printf("Nota [0.0, 10.0] do Bimestre 2: ");
    scanf("%lf", &B2);

    //TRATAMENTO DE ERRO:
    if(B1 < 0 || B1 > 10 || B2 < 0 || B2 > 10)
    {
        printf("ERRO: Valor incorreto\n");
    }
    else
    {
        media = (B1 + B2) / 2;

        //ARREDONDAMENTO (ROUND): UMA CASA DECIMAL
        media = round(media*10)/10.0;

        printf("Media: %.1f\n", media);
        if(media < 3.0)
        {
            printf("STATUS: Reprovacao.\n");
        }
        else if(media < 7.0)
        {
            printf("Nota [0.0, 10.0] da prova final: ");
            scanf("%lf", &PF);

            //TRATAMENTO DE ERRO:
            if(PF < 0 || PF > 10)
            {
                printf("ERRO: Valor incorreto\n");
            }
            else
            {
                media = (media + PF) / 2;

                //ARREDONDAMENTO:
                media = round(media*10)/10.0;

                printf("Media: %.1f\n", media);
                if(media < 5.0)
                {
                    printf("STATUS: Reprovacao.\n");
                }
                else
                {
                    printf("STATUS: Aprovacao.\n");
                }
            }
        }
        else
        {
            printf("STATUS: Aprovacao.\n");
        }
    }
    return 0;
}
