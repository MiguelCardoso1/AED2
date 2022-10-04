/******************************************************************************

Miguel Cardoso Malton 03/10/22 - Lista de exercicio 4- structs

*******************************************************************************/
#include <stdio.h>
typedef struct {
    long codigo;
    float preco;
} Produto;

int main()
{
    Produto p;
    printf("Digite codigo, nome preco: ");
    scanf("%ld %.2f", &p.codigo, &p.preco);
    
    printf("Valores digitados\n");
    printf("%ld  %.2f", p.codigo, p.preco);
    
    if (p.preco < 4) printf ("Produto em promoção");
    else             printf ("Produto cadastrado");
    

    return 0;
}
