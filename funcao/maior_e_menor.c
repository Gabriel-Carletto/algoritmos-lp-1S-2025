#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

    int x = atoi (argv[1]);
    int y = atoi (argv[2]);
    int z = atoi (argv[3]);
    
    if (argc != 3 && argc != 4)
    {
        printf("Informe 2 ou 3 argumentos incluindo o nome de execucao\n");

        return 1;
    }
    
    if(argc == 3){
    
    printf("Maior entre (%d,%d): %d\n", x, y, maior_2n(x,y));

    printf("Menor entre (%d,%d): %d\n", x, y, menor_2n(x,y));
    
    }

    else{
    printf("Maior entre (%d,%d,%d): %d\n", x, y, z, maior_3n(x,y,z));
    
    printf("Menor entre (%d,%d,%d): %d\n", x, y, z, menor_3n(x,y,z));

    }

    return 0;
}