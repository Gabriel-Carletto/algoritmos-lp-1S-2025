#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Triângulo:
    
         
    float Base_Triangulo;
    float Altura_Triangulo;

    
    printf("Por favor, digite o valor da base do triangulo: ");
    scanf("%f", &Base_Triangulo);
    printf("Por favor, digite o valor da altura do triangulo: ");
    scanf("%f", &Altura_Triangulo);

    float area_do_triangulo_parte_1 = (Base_Triangulo * Altura_Triangulo);
    float area_do_triangulo_parte_2 = (area_do_triangulo_parte_1 / 2);
    
    
    printf("O valor da base do trangulo eh: %2.f\n", Base_Triangulo);
    printf("O valor da altura do triangulo eh: %2.f\n", Altura_Triangulo);
    printf("A area do triangulo eh: %.2f\n", area_do_triangulo_parte_2);
    
    
    return 0;
}