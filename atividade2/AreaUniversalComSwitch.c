#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[]){

    printf("----------------------------------------------- \n");
    printf("Calculo das areas de figuras planas regulares \n");
    printf("----------------------------------------------- \n");
    printf("Se quiser calcular o valor de um circulo digite c. \n");
    printf("Se quiser calcular o valor de um losango digite l. \n");
    printf("Se quiser calcular o valor de um quadrado digite q. \n");
    printf("Se quiser calcular o valor de um retangulo digite r. \n");
    printf("Se quiser calcular o valor de um trapezio digite z. \n");
    printf("Se quiser calcular o valor de um triangulo digite t. \n");
    printf("----------------------------------------------- \n");

    char  Figura_Plana;
    float raio;
    float PI;
    float Diagonal_Maior;
    float Diagonal_Menor;
    float Lado_Quadrado;
    float Base_Retangulo;
    float Altura_Retangulo;
    float Base_Trapezio_maior;
    float Altura_Trapezio;
    float base_trapezio_menor;
    float Base_Triangulo;
    float Altura_Triangulo;

   
    printf("Digite o numero correspondente a figura plana que voce quer calcular: \n");
    scanf("%c", &Figura_Plana);

    switch(Figura_Plana){

        case 'c':
            printf("Circulo\n");
            printf("Por favor, digite o valor do raio: ");
            scanf("%f", &raio);
            printf("Por favor, digite o valor de PI: ");
            scanf("%f", &PI);

            float area_do_circulo_parte_1 = (raio * raio);
            float area_do_circulo_parte_2 = (area_do_circulo_parte_1 * PI);
    
            printf("O valor de PI eh: %2.f\n", PI);
            printf("O valor do raio eh: %2.f\n", raio);
            printf("A area do circulo eh: %.2f\n", area_do_circulo_parte_2);
            break;
        
        case 'l':
            printf("Losango\n");
            printf("Por favor, digite o valor da Diagonal Maior: ");
            scanf("%f", &Diagonal_Maior);
            printf("Por favor, digite o valor da Diagonal Menor: ");
            scanf("%f", &Diagonal_Menor);

            float area_do_Losango_parte_1 = (Diagonal_Maior * Diagonal_Menor);
            float area_do_Losango_parte_2 = (area_do_Losango_parte_1 / 2);
    
            printf("O valor da diagonal maior eh: %2.f\n", Diagonal_Maior);
            printf("O valor da diagonal menor eh: %2.f\n", Diagonal_Menor);
            printf("A area do losango eh: %.2f\n", area_do_Losango_parte_2);
            break;
        case 'q':
            printf("Quadrado\n");
            printf("Por favor, digite o valor do lado do quadrado: ");
            scanf("%f", &Lado_Quadrado);
    

            float area_do_quadrado = (Lado_Quadrado * Lado_Quadrado);
    
            printf("O valor do lado do quadrado eh: %2.f\n", Lado_Quadrado);
            printf("A area do quadrado eh: %.2f\n", area_do_quadrado);
            break;    
        case 'r':
            printf("Retangulo\n");
             printf("Por favor, digite o valor da Base do retangulo: ");
            scanf("%f", &Base_Retangulo);
            printf("Por favor, digite o valor da altura do retangulo: ");
            scanf("%f", &Altura_Retangulo);

            float area_do_retangulo = (Base_Retangulo * Altura_Retangulo);
    
            printf("O valor da base do retangulo eh: %2.f\n", Base_Retangulo);
            printf("O valor da altura do retangulo eh: %2.f\n", Altura_Retangulo);
            printf("A area do retangulo eh: %.2f\n", area_do_retangulo);
            break;
        case 'z':
            printf("Trapezio\n");
            printf("Por favor, digite o valor da base maior do trapezio: ");
            scanf("%f", &Base_Trapezio_maior);
            printf("Por favor, digite o valor da altura do trapezio: ");
            scanf("%f", &Altura_Trapezio);
            printf("Por favor, digite o valor da base menor do trapezio: ");
            scanf("%f", &base_trapezio_menor);
  
    
            float area_do_trapezio_parte_1 = (Base_Trapezio_maior + base_trapezio_menor);
            float area_do_trapezio_parte_2 = (area_do_trapezio_parte_1 * Altura_Trapezio);
            float area_do_trapezio_parte_3 = (area_do_trapezio_parte_2 / 2);
   
   
   
            printf("O valor da base maior eh: %2.f\n", Base_Trapezio_maior);
            printf("O valor da base menor eh: %2.f\n", base_trapezio_menor);
            printf("O valor da altura eh: %2.f\n", Altura_Trapezio);
            printf("A area do trapezio eh: %.2f\n", area_do_trapezio_parte_3);
            break;
        case 't':
            printf("Triangulo\n");
            printf("Por favor, digite o valor da base do triangulo: ");
            scanf("%f", &Base_Triangulo);
            printf("Por favor, digite o valor da altura do triangulo: ");
            scanf("%f", &Altura_Triangulo);

            float area_do_triangulo_parte_1 = (Base_Triangulo * Altura_Triangulo);
            float area_do_triangulo_parte_2 = (area_do_triangulo_parte_1 / 2);
    
    
            printf("O valor da base do trangulo eh: %2.f\n", Base_Triangulo);
            printf("O valor da altura do triangulo eh: %2.f\n", Altura_Triangulo);
            printf("A area do triangulo eh: %.2f\n", area_do_triangulo_parte_2);
            break;
        default:
            printf("Opcao invalida! \n");}
    printf("----------------------------------------------- \n");
    printf("Obrigado por utilizar a calculadora de areas! :) ");
    return 0;
}