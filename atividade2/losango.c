#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    // Cálculo da área de um Losango:
    // Suponha um Losango de diagonal maior 6cm e diagonal menor 4cm
         
    float Diagonal_Maior = 6;
    float Diagonal_Menor = 4;

    float area_do_Losango_parte_1 = (Diagonal_Maior * Diagonal_Menor);
    float area_do_Losango_parte_2 = (area_do_Losango_parte_1 / 2);
    
    printf("O valor da diagonal maior eh: %2.f/n", Diagonal_Maior)
    printf("O valor da diagonal menor eh: %2.f/n", Diagonal_Menor)
    printf("A area do losango eh: %.2f", area_do_Losango_parte_2);

    return 0;
}