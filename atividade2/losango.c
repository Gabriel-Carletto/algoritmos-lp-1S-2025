#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Losango:
            
    float Diagonal_Maior;
    float Diagonal_Menor;

    
    printf("Por favor, digite o valor da Diagonal Maior: ");
    scanf("%f", &Diagonal_Maior);
    printf("Por favor, digite o valor da Diagonal Menor: ");
    scanf("%f", &Diagonal_Menor);

    float area_do_Losango_parte_1 = (Diagonal_Maior * Diagonal_Menor);
    float area_do_Losango_parte_2 = (area_do_Losango_parte_1 / 2);
    
    printf("O valor da diagonal maior eh: %2.f\n", Diagonal_Maior);
    printf("O valor da diagonal menor eh: %2.f\n", Diagonal_Menor);
    printf("A area do losango eh: %.2f\n", area_do_Losango_parte_2);

    return 0;
}