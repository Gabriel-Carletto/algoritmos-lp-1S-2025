#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    // Cálculo da área de um Trapézio:
    // Suponha um Trapézio de base maior 6cm, base menor 3cm ealtura 4cm
         
    float Base_Trapezio_maior = 6;
    float Altura_Trapezio = 4;
    float base_trapezio_menor = 3;
    float area_do_trapezio_parte_1 = (Base_Trapezio_maior + base_trapezio_menor);
    float area_do_trapezio_parte_2 = (area_do_trapezio_parte_1 * Altura_Trapezio);
    float area_do_trapezio_parte_3 = (area_do_trapezio_parte_2 / 2);
   
   
    printf("O valor da base maior eh: %2.f/n", Base_Trapezio_maior)
    printf("O valor da base menor eh: %2.f/n", base_trapezio_menor)
    printf("O valor da altura eh: %2.f/n", Altura_Trapezio)
    printf("A area do trapezio eh: %.2f", area_do_trapezio_parte_3);
    

    return 0;
}