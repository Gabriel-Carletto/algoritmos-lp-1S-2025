#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Triângulo:
    // Suponha um triângulo de base 6cm e altura 4cm
         
    float Base_Triangulo = 6;
    float Altura_Triangulo = 4;

    float area_do_triangulo_parte_1 = (Base_Triangulo * Altura_Triangulo);
    float area_do_triangulo_parte_2 = (area_do_triangulo_parte_1 / 2);
    printf("A area do triangulo eh: %.2f", area_do_triangulo_parte_2);
    
    
    return 0;
}