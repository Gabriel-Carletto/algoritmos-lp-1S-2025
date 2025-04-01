#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Rentângulo:
    // Suponha um Retângulo de base 6cm e altura 4cm
         
    float Base_Retangulo = 6;
    float Altura_Retangulo = 4;

    float area_do_retangulo = (Base_Retangulo * Altura_Retangulo);
    
    printf("O valor da base do retangulo eh: %2.f/n", Base_Retangulo);
    printf("O valor da altura do retangulo eh: %2.f/n", Altura_Retangulo);
    printf("A area do retangulo eh: %.2f", area_do_retangulo);
    

    return 0;
}