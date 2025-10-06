#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exibidor de todos os múltiplos de 7 ou 13 que estao no intervalo entre 1000 e 1500.\n");

    int i;

    for(i = 1000; i <=1500; i++)
    {
        if(i % 7 == 0 && i % 13 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("Fim do programa\n");



    return 0;
}
