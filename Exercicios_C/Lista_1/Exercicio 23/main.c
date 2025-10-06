#include <stdio.h>

int main() {
    int inscricao, inscricaoVencedor;
    float tempo, menorTempo;
    int i;

    printf("SISTEMA DE REGISTRO DE MARATONA\n");
    do {
        printf("Maratonista 1:\n");
        printf("Numero de inscricao: ");
        scanf("%d", &inscricao);

        if (inscricao <= 0) {
            printf("ERRO: Numero de inscricao deve ser positivo!\n\n");
        }
    } while (inscricao <= 0);

    do {
        printf("Tempo de prova (minutos): ");
        scanf("%f", &tempo);

        if (tempo <= 0) {
            printf("ERRO: Tempo deve ser positivo!\n");
        }
    } while (tempo <= 0);

    inscricaoVencedor = inscricao;
    menorTempo = tempo;


    for (i = 2; i <= 20000; i++) {
        printf("Maratonista %d:\n", i);

        do {
            printf("Numero de inscricao: ");
            scanf("%d", &inscricao);

            if (inscricao <= 0) {
                printf("ERRO: Numero de inscricao deve ser positivo\n");
            }
        } while (inscricao <= 0);

        do {
            printf("Tempo de prova (minutos): ");
            scanf("%f", &tempo);

            if (tempo <= 0) {
                printf("ERRO: Tempo deve ser positivo!\n");
            }
        } while (tempo <= 0);

        if (tempo < menorTempo) {
            menorTempo = tempo;
            inscricaoVencedor = inscricao;
        }

    }


    printf("VENCEDOR DA MARATONA\n");
    printf("Numero de Inscricao: %d\n", inscricaoVencedor);
    printf("Tempo de Prova: %.2f minutos\n", menorTempo);
    printf("Tempo em horas: %.2f horas\n", menorTempo / 60);

    return 0;
}
