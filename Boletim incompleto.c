/******************************************************************************
Miguel Cardoso Malton - atividade de struct  data: 26/09/22
*******************************************************************************/

#include <stdio.h>
#define TAMANHO 2

 float calculamedia( float N1, float N2) {
    float md;
    md = (N1 + N2)/TAMANHO;
    return (md);
}

int main() {

    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[TAMANHO];
    
    for (int i=0;i<TAMANHO;i++) {
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       
       // Acumular essa média na media da sala
    }
            
            
    // Saidas
    
    // Calcular a média da sala
    // mediaSala = ...
            
    for(int i=0; i<TAMANHO;i++) {
        printf( "\nBOLETIM DO ALUNO %d\n",aluno[i].matricula);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        
        // Apresentar mensagem se esta abaixo ou acima da média
        
    } 
    
    // Mostrar os totais da sala
    
    
    return (0);
}