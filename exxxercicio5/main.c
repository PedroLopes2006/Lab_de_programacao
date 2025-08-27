#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    printf("CALCULADORA DA TINTA EM LATAS\n");

    double raio, altura, area_total, preco, quantidade_latas;
    printf("Qual o raio do tanque: ");
    scanf("%lf", &raio);
    printf("Qual a altura do tanque: ");
    scanf("%lf", &altura);

    if(raio <= 0 || altura <= 0)
    {
        printf("DADOS INVALIDOS\n");
    }
    else
    {
        area_total = 2 * PI * pow(raio,2) + 2 * PI * raio * altura;
        quantidade_latas = ceil(area_total/15);
        preco = quantidade_latas * 50;

        printf("QUANTIDADE DE LATAS UTILIZADAS: %.2lf\n", quantidade_latas);
        printf("PRECO GASTO: %.2lf\n", preco);


    }
    return 0;
}
