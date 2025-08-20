#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ALGORITIMO DO PRECO REAJUSTADO\n");

    float preco, porcentagem,valor;
    int selec;

    printf("Digite o preco da mercadoria: ");
    scanf("%f", &preco);

    if(preco > 0)
    {
        printf("Digite a porcentagem do desconto ou do acrescimo: ");
        scanf("%f", &porcentagem);
        if(porcentagem > 0)
        {
            printf("Voce deseja acrescentar ou subtrair essa porcentagem ao valor do produtor? Acrescentar = 1/Subtrair = 2 ");
            scanf("%d", &selec);
            if(selec == 1 || selec == 2)
            {
                if(selec == 1)
                {
                    valor = preco + (preco * (porcentagem/100));

                    printf("O valor pago será de: %.2f", valor);
                }
                else
                {
                    valor = preco - (preco * (porcentagem/100));

                    printf("O valor pago será de: %.2f", valor);
                }
            }
            else
            {
                printf("Alternativa invalida");
            }
        }
        else
        {
            printf("Porcentagem selecionada invalida");
        }

    }
    else
    {
        printf("Preco selecionado invalido");
    }



    return 0;
}
