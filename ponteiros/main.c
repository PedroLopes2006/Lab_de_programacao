#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cubo1(float L, float *area, float *volume);

float cubo2(float L, float *volume);

float cubo3(float L, float *area);



void cubo1(float L, float *area, float *volume)
{

    *area = 6 * pow(L,2);
    *volume = pow(L,3);

}

float cubo2(float L, float *volume)
{
    float area;

    area = 6 * pow(L,2);
    *volume = pow(L,3);

    return area;

}

float cubo3(float L, float *area)
{

    float volume;

    *area = 6 * pow(L,2);
    volume = pow(L,3);

    return volume;


}



int main(void)
{
   int contador = 0;
   float L, area, volume;

   while(contador < 100)
   {
       printf("Dados do cubo %i:\n", contador + 1);
       printf("Valor do Lado (L > 0): ");
       scanf("%f", &L);
       //TRATAMENTO DE ERRO:
       if(L <= 0)
       {
           printf("ERRO NO LADO: Escolha de novo.\n");
       }
       else
       {
           printf("Dados de saida:\n");

           cubo1(L, &area, &volume);

           printf("Area: %.1f metros quadrados.\n", area);
           printf("Volume: %.1f metros cubicos.\n", volume);

           contador += 1;


       }


   }


  return 0;
}
