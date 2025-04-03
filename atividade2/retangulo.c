#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Rentângulo:
         
    float Base_Retangulo;
    float Altura_Retangulo;

    
    printf("Por favor, digite o valor da Base do retangulo: ");
    scanf("%f", &Base_Retangulo);
    printf("Por favor, digite o valor da altura do retangulo: ");
    scanf("%f", &Altura_Retangulo);

    float area_do_retangulo = (Base_Retangulo * Altura_Retangulo);
    
    printf("O valor da base do retangulo eh: %2.f\n", Base_Retangulo);
    printf("O valor da altura do retangulo eh: %2.f\n", Altura_Retangulo);
    printf("A area do retangulo eh: %.2f\n", area_do_retangulo);
    

    return 0;
}