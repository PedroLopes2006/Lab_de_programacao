#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


int main() {
    float numero, soma = 0;
    int contador = 0;
    float min = 10 * PI * PI * PI, max = 100 * PI;

    printf("Intervalo: [%.2f, %.2f]\n", min, max);

    do {
        printf("Numero: ");
        scanf("%f", &numero);

        if (numero >= min && numero <= max) {
            soma += numero;
            contador++;
        } else {
            break;
        }

    } while (1);

    if (contador > 0) {
        printf("Media: %.2f\n", soma / contador);
    } else {
        printf("Nenhum numero valido!\n");
    }

    return 0;
}
