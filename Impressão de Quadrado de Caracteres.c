/******************************************************************************

Miguel 19/09/22 - Impressão de Quadrado de Caracteres

*******************************************************************************/
#include <stdio.h>
int imprime (char var, int x) {
    for(int l=1; l<=x; l++ ){
        for(int c=1; c<=x; c++) {
            printf("%c", var);
        }
        printf("\n");
    }
    return x * x;
}


int main()
{
  int qtde;
  qtde = imprime ('#', 35);
  printf ("Foram impressos %d caracteres no primeiro e %d no segundo", qtde, imprime ('!',5) );
    return 0;
}
