#include <stdio.h>

#define TAM_NOME 64

 typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
 } Aluno;

    void imprimir_aluno(struct Aluno a){
        printf("Nome: %s \tNota: %f\n", a.nome, a.nota);
    }
int main(int argc, char* argv[]){

    int n = 5;
    struct Aluno alunos[n];
    
  
  for (int i = 0; i < 5; i++){

    printf("Digite o nome do aluno: \n");
    fgets(alunos[i].nome, TAM_NOME, stdin);
    printf("Digite a nota do aluno: \n");
    scanf("%f", &alunos[i].nota);
    fflush(stdin);
    imprimir_aluno(alunos[i]);
  

  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;

}