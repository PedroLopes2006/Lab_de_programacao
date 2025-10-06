#include <stdio.h>

int main() {
    int numero;
    int contador = 0;
    int soma = 0;
    float media;

    printf("LEITOR DE 100 NUMEROS IMPARES E MULTIPLOS DE 7\n");
    printf("Digite numeros que sejam impares E multiplos de 7:\n");

    while (contador < 100) {
        printf("Numero %d/100: ", contador + 1);
        scanf("%d", &numero);

        // Verificar se é ímpar E múltiplo de 7
        if (numero % 2 != 0 && numero % 7 == 0) {
            soma = soma + numero;
            contador++;
        } else {
            printf("Numero invalido! Deve ser impar E multiplo de 7.\n");
        }
    }

    media = soma / 100.0;

    printf("RESULTADO\n");
    printf("Soma total: %d\n", soma);
    printf("Media dos 100 numeros: %.2f\n", media);

    return 0;
}
