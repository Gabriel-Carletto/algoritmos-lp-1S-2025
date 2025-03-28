#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Quadrado:
    // Suponha um Quadrado de base 6cm e altura 6cm
         
    float Lado_Quadrado = 6;
    

    float area_do_quadrado = (Lado_Quadrado * Lado_Quadrado);
    printf("A area do quadrado eh: %.2f", area_do_quadrado);
    
    return 0;
}