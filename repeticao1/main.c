#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fulano = 0, beltrano = 0, cicrano = 0; //TOTALIZAR / RESETAR
    int moradores = 0;                         //ENUMERAR / RESETAR
    int voto, opcao;
    float pfulano, pbeltrano, pcicrano;

    printf("ELEICAO PARA SINDICO DO PREDIO\n");
    printf("Menu de opcoes:\n");
    printf("[1]: Cadastrar voto\n");
    printf("[0]: Sair do programa\n");
    do
    {

      printf("Sua opcao: ");
      scanf("%i", &opcao);
      //TRATAMENTO DE ERRO:
      if(opcao < 0 || opcao > 1)
      {
          printf("ERRO: Escolha de novo.\n");
      }else if(opcao == 0)
      {
          printf("FIM DA ELEICAO.\n");
      }else
      {
          printf("Opcoes de candidatos:\n");
          printf("[1]: Fulano\n");
          printf("[2]: Beltrano\n");
          printf("[3]: Cicrano\n");
          do
          {
              printf("Morador %i: Seu voto: ", moradores + 1);
              scanf("%i", &voto);
              //TRATAMENTO DE ERRO:
              if(voto < 1 || voto > 3)
              {
                  printf("ERRO: Voto incorreto\n");
              }
          }while(voto < 1 || voto > 3);
          if(voto == 1)
          {
              fulano++;
          }
          else if(voto == 2)
          {
              beltrano++;
          }
          else
          {
              cicrano++;
          }
          moradores = moradores + 1; //STEP
          pfulano = 100.0 * fulano/moradores;
          pbeltrano = 100.0 * beltrano/moradores;
          pcicrano = 100.0 * cicrano/moradores;

          printf("Resultado da eleicao: ");
          printf("Total de votos de fulano: %i (%.1f%%)\n", fulano, pfulano);
          printf("Total de votos de beltrano: %i (%.1f%%)\n", beltrano, pbeltrano);
          printf("Total de votos de cicrano: %i (%.1f%%)\n", cicrano, pcicrano);
      }

    }while(opcao != 0);

    return 0;
}
