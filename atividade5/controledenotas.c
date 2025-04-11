#include <stdio.h>

int main(int argc, char* argv[]){

// Parte 1: Prints de Início de Programa e Solicitação da quantidade de alunos.

    printf("_____________________________________________________________\n");
    printf("Inicializando programa de controle de notas, favor aguardar: \n");
    printf("_____________________________________________________________\n");
    
    int qtdAlunos;
    
    
    printf("Informe a quantidade de alunos:  \n");
    scanf("%d", &qtdAlunos);
    
    
    float notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){

        printf("\n Digite a nota do aluno %d:", i+1);
        scanf("%f", &notas[i]);



    }


    for(int i = 0; i < qtdAlunos; i++){

        printf("\n Nota do aluno %d: %.2f", i, notas[i]);
        



    }

    return 0;
}