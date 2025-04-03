#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Quadrado:

         
    float Lado_Quadrado;
    
    printf("Por favor, digite o valor do lado do quadrado: ");
    scanf("%f", &Lado_Quadrado);
    

    float area_do_quadrado = (Lado_Quadrado * Lado_Quadrado);
    
    printf("O valor do lado do quadrado eh: %2.f\n", Lado_Quadrado);
    printf("A area do quadrado eh: %.2f\n", area_do_quadrado);
    
    return 0;
}