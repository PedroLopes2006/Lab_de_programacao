#include <stdio.h>
#define PI 3.14

int main() {
    int n;
    float S = 0;
    float M = 1;
    float termo;
    int i;

    printf("CALCULADORA DE SERIES MATEMATICAS\n");

    do {
        printf("Digite o valor de n (n >= 1): ");
        scanf("%d", &n);

        if (n < 1) {
            printf("ERRO: O valor deve ser um inteiro positivo >= 1!\n");
        }
    } while (n < 1);


    printf("CALCULANDO SOMA (S)\n");
    printf("S = PI/1 + PI/2 + PI/3 + ... + PI/%d\n", n);

    for (i = 1; i <= n; i++) {
        termo = PI / i;
        S = S + termo;
        printf("Termo %2d: PI/%2d = %8.5f | Soma parcial = %8.5f\n",
               i, i, termo, S);
    }

    printf("CALCULANDO MULTIPLICACAO (M)\n");
    printf("M = (1/PI) * (2/PI) * (3/PI) * ... * (%d/PI)\n", n);

    for (i = 1; i <= n; i++) {
        termo = (float)i / PI;
        M = M * termo;
        printf("Termo %2d: %2d/PI = %8.5f | Produto parcial = %8.5f\n",
               i, i, termo, M);
    }

    return 0;
}
