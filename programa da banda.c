/******************************************************************************

Miguel Cardoso Malton 10/10/22 - programa relacionado a banda
*******************************************************************************/

#include <string.h>
#define TAMANHO 3   
typedef struct banda {
    char nome[20];
    char estilo[15];
    int tamanho;
    int rank;
} BANDA;
void leBanda (BANDA *v) {
  for(int i=0;i<TAMANHO;i++) {
    printf("\nNome da banda: ");   scanf("%s", v[i].nome);
    printf("Estilo musical: ");    scanf("%s", v[i].estilo);
    printf("Qt de integrantes: ") ;scanf("%d",&v[i].tamanho);
    printf("Posicao no ranking: ");scanf("%d",&v[i].rank);
  }
}
void exibeBanda (BANDA *exib) {
    for( int i=0;i <TAMANHO ; i++) {
        printf("\n\nBanda: %s",exib[i].nome);
        printf("\nEstilo: %s",exib[i].estilo);
        printf("\nIntegrantes: %d",exib[i].tamanho);
        printf("\nPosicao: %d",exib[i].rank);
    }
}
int main() {
    BANDA v[TAMANHO];     
    leBanda (v);
    printf ("\n\nLISTAGEM DE TODAS AS BANDAS");
    exibeBanda (v);
    return 0;
}






