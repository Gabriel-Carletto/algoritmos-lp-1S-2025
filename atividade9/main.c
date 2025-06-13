#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]){

    int menor, maior, esperado;

    menor = atoi(argv[1]);
    maior = atoi(argv[2]);
    esperado = atoi(argv[3]);

    if(menor >= maior){
        printf("Argumento invalido. \n");
        return 1;
    }

    if(esperado < menor || esperado > maior){
        printf("Argumento invalido. \n");
        return 1;
    }

    sorteado = rand();














    return 0;
}