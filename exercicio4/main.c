#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    double raio, altura, volume, tempo, horas, minutos, segundos;

    printf("TEMPO DE AUTONOMIA: Dados de entrada\n");

    printf("Raio do tanque (metros): ");
    scanf("%lf", &raio);
    if(raio <= 0)
    {
        printf("VALOR INVALIDO PARA O RAIO\n");
    }
    else
    {
      printf("Altura da agua no tanque (metros): ");
      scanf("%lf", &altura);

      printf("Informacoes do Tanque de agua\n");

      volume = PI * pow(raio,2) * altura;
      tempo = (volume*1000)/1350;
      horas = floor(tempo);
      minutos = floor((tempo - horas)*60);
      segundos = ceil((((tempo - horas)*60)-minutos)*60);

      printf("Volume: %.2f Metros Cubicos\n", volume);
      printf("Volume: %.2f Litros\n", volume * 1000);
      printf("Tempo: %.5f Horas\n", tempo);
      printf("TEMPO DE AUTONOMIA (HH:MM:SS):%.lf:%.lf:%.lf\n", horas, minutos, segundos);


    }

    return 0;
}
