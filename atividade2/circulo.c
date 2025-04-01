#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

     // Cálculo da área de um Círculo:
    // Suponha um círculo de raio 5cm
         
    float raio = 5;
    float PI = 3.14;

    float area_do_circulo_parte_1 = (raio * raio);
    float area_do_circulo_parte_2 = (area_do_circulo_parte_1 * PI);
    printf("A area do losango eh: %.2f", area_do_circulo_parte_2);

    return 0;
}