#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

     // Cálculo da área de um Círculo:
         
    float raio;
    float PI;
    
    printf("Por favor, digite o valor do raio: ");
    scanf("%f", &raio);
    printf("Por favor, digite o valor de PI: ");
    scanf("%f", &PI);

    float area_do_circulo_parte_1 = (raio * raio);
    float area_do_circulo_parte_2 = (area_do_circulo_parte_1 * PI);
    
    printf("O valor de PI eh: %2.f\n", PI);
    printf("O valor do raio eh: %2.f\n", raio);
    printf("A area do circulo eh: %.2f\n", area_do_circulo_parte_2);

    return 0;
}