#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char* argv[]){

    // Declaração de strings
   
    char palavra1[] = "Abnerdois";
    char palavra2[] = {'A','b','n','e','r','d','o','i','s', '\0'};
    char palavra3[TAM];
    char palavra4[TAM];
    char palavra5[TAM];

    printf("%s\n", palavra1);
   
    printf("%s\n", palavra2);
    
    //Leitura segura de Strings!!!!!! Usando o fgets, voce limita o tamanho maximo da string e protegendo da vunerabilidade da funcao get.
    
    

    printf("Digite um texto para a palavra 3:  \n");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("%s\n", palavra3);

    printf("Digite um texto para a palavra 4:  \n");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    printf("%s\n", palavra4);

    printf("Digite um texto para a palavra 5:  \n");
    fflush(stdin);
    fgets(palavra5, TAM, stdin);

    printf("%s\n", palavra5);

    if (strcmp(palavra4,palavra5) == 0){

        printf("As palavras sao iguais!\n");
    }
    else {

        printf("As palavras NAO sao iguais!\n");
    }

    for(int i = 0; i < strlen(palavra4); i++){
        printf("%c\n", palavra4[i]);
    }



    // Imprime a palavra 4 ao contrtario

    for(int i = strlen(palavra4) -1; i >= 0; i--){
        printf("%c\n", palavra4[i]);
    }

    // juntar as duas palavras. concatena palavra 4 e 5
   
    strcat(palavra4, palavra5);
    printf("Palavra 4 concatenada = %s", palavra4);
    
    return 0;
}