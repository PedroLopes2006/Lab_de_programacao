#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reajuste de mercadorias\n");

    float preco, reajuste, precoFinal;
    int contador;
    contador = 1;

    do
    {
        printf("Digite o preco da mercadoria: ");
        scanf("%f", &preco);

        reajuste = preco * (5/100.0);

        if(reajuste < 25.50)
        {
            precoFinal = preco - reajuste;
            printf("Preco com reajuste da mercadoria %d e: %f\n", contador, precoFinal);
        }
        else
        {
            reajuste = reajuste - (reajuste * (2/100));
            precoFinal = preco - reajuste;
            printf("Preco com reajuste da mercadoria %d e: %f\n", contador, precoFinal);
        }

        contador++;


    }while(contador <= 50);



    return 0;
}
