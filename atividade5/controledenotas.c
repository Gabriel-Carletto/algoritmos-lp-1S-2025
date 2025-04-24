#include <stdio.h>

int main(int argc, char* argv[]){

// Parte 1: Prints de Início de Programa e Solicitação da quantidade de alunos.

    printf("_____________________________________________________________\n");
    printf("Inicializando programa de controle de notas, favor aguardar: \n");
    printf("_____________________________________________________________\n");
    
    int qtdAlunos;
    
    
    printf("Informe a quantidade de alunos:  \n");
    scanf("%d", &qtdAlunos);
    printf("_____________________________________________________________\n");
    printf("A quantidade de alunos eh: %d \n", qtdAlunos);
    printf("_____________________________________________________________\n");
    
    float notas[qtdAlunos];

    for(int i = 0; i < qtdAlunos; i++){
        do {
        printf("\n Digite a nota do aluno %d:", i+1);
        scanf("%f", &notas[i]);
        } while (notas[i] > 10.0 || notas[i] < 0.0);
    
    }


    for(int i = 0; i < qtdAlunos; i++){

        printf("\n Nota do aluno %d: %.2f \n", i+1, notas[i] );
        



    }


     int posicao;
    printf("_____________________________________________________________\n");
    printf("Digite o numero do aluno desejado (1 a %d): ", qtdAlunos);
    scanf("%d", &posicao);
    printf("_____________________________________________________________\n");

    if (posicao >= 1 && posicao <= qtdAlunos) { // Se a contagem começa em 1
        printf("Nota do aluno %d: %.2f\n", posicao, notas[posicao - 1]);
    } else {
        printf("Numero invalido!\n");
    }
    

    // Soma todas as notas
    float soma_notas = 0;
    for(int i = 0; i < qtdAlunos; i++) {
        soma_notas += notas[i]; 
    }

    float Media_Geral_DA_Turma = soma_notas / qtdAlunos;
    
    printf("_____________________________________________________________\n");
    printf("A Media geral da turma eh:  %.2f \n", Media_Geral_DA_Turma);
    printf("_____________________________________________________________\n");
    
    float maiorNota = notas[0];
    for(int i = 1; i < qtdAlunos; i++) {
        if(notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }
    printf("A maior nota eh: %.2f \n", maiorNota);
    printf("_____________________________________________________________\n");

  
    
    float menorNota = notas[0];
    for(int i = 1; i < qtdAlunos; i++) {
        if(notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }
    printf("Menor nota: %.2f \n", menorNota);
    printf("_____________________________________________________________\n");
    int aprovados = 0;
    
    for(int i = 0; i < qtdAlunos; i++) {
        if(notas[i] >= 6.0) {
            aprovados++;
        }
    }
    printf("A quantidade de alunos aprovados eh: %d \n", aprovados);

    return 0;
}