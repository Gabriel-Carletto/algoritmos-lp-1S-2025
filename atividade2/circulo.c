#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

     // Cálculo da área de um Círculo:
    // Suponha um círculo de raio 5cm
         
    float raio = 5;
    float PI = 3.14;

    float area_do_circulo_parte_1 = (raio * raio);
    float area_do_circulo_parte_2 = (area_do_circulo_parte_1 * PI);
    
    printf("O valor de PI eh: %2.f", PI);
    printf("O valor do raio eh: %2.f/n", raio);
    printf("A area do circulo eh: %.2f/n", area_do_circulo_parte_2);

    return 0;
}