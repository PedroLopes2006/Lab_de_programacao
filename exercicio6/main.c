#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MINI CALCULADORA PROGRAMÁVEL:\n");

    float N1, N2;
    int operacao;

    printf("Qual o primeiro numero selecionado: \n");
    scanf("%.2f", &N1);

    printf("Qual o primeiro numero selecionado: \n");
    scanf("%.2f", &N2);
    if(N1 < 0 || N2 < 0)
    {
        printf("ERRO: SELECIONE UM NUMERO INTEIRO");
    }
    else
    {
        printf("[1]: SOMA: N1 + N2
                "[2]: SUBTRAÇÃO: N1 - N2
                "[3]: MULTIPLICAÇÃO: N1 * N2
                "[4]: DIVISÃO: N1 / N2
                "[5]: DIV: N1 / N2
                "[6]: MOD: N1 % N2");
    }

    return 0;
}
