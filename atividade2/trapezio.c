#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    // Cálculo da área de um Trapézio:
    
         
    float Base_Trapezio_maior;
    float Altura_Trapezio;
    float base_trapezio_menor;
    
    
    printf("Por favor, digite o valor da base maior do trapezio: ");
    scanf("%f", &Base_Trapezio_maior);
    printf("Por favor, digite o valor da altura do trapezio: ");
    scanf("%f", &Altura_Trapezio);
    printf("Por favor, digite o valor da base menor do trapezio: ");
    scanf("%f", &base_trapezio_menor);
  
    
    float area_do_trapezio_parte_1 = (Base_Trapezio_maior + base_trapezio_menor);
    float area_do_trapezio_parte_2 = (area_do_trapezio_parte_1 * Altura_Trapezio);
    float area_do_trapezio_parte_3 = (area_do_trapezio_parte_2 / 2);
   
   
   
    printf("O valor da base maior eh: %2.f/n", Base_Trapezio_maior);
    printf("O valor da base menor eh: %2.f/n", base_trapezio_menor);
    printf("O valor da altura eh: %2.f/n", Altura_Trapezio);
    printf("A area do trapezio eh: %.2f", area_do_trapezio_parte_3);
    

    return 0;
}