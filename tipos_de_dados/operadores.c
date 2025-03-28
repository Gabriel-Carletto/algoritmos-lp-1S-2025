#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    float N1;
    float N2;

    printf("Por favor, digite o valor de N1: ");
    scanf("%f", &N1);
    printf("Por favor, digite o valor de N2: ");
    scanf("%f", &N2);
    
    // Adição

    float soma = (N1 + N2);
    printf("O Valor de sua Adição eh: %.2f\n", soma);
    printf("%.2f + %.2f = %.2f\n", N1, N2, soma);
   
    // Subtração
   
    float Subtracao1 = (N1 - N2);
    printf("O Valor de sua Subtracao 1 eh: %.2f\n", Subtracao1);
    printf("%.2f - %.2f = %.2f\n", N1, N2, Subtracao1);
    float Subtracao2 = (N2 - N1);
    printf("O Valor de sua Subtracao 2 eh: %.2f\n", Subtracao2);   
    printf("%.2f - %.2f = %.2f\n", N2, N1, Subtracao2);
   
    // Multiplicação

    float Multiplicacao = (N1 * N2);
    printf("O Valor de sua multiplicacao eh: %.2f\n", Multiplicacao);
    printf("%.2f * %.2f = %.2f\n", N1, N2, Multiplicacao);
    
    // Divisão
   
    float Divisao1 = (N1 / N2);
    printf("O Valor de sua Divisao 1 eh: %.2f\n", Divisao1);
    printf("%.2f / %.2f = %.2f\n", N1, N2, Divisao1);
    float Divisao2 = (N2 / N1);
    printf("O Valor de sua Divisao 2 eh: %.2f\n", Divisao2);
    printf("%.2f / %.2f = %.2f\n", N2, N1, Divisao2);
    
    // Potenciação
    
    float Potenciacao1 = powf(N1, N1);
    printf("O Valor de sua Potenciacao 1 eh: %.2f\n", Potenciacao1);
    printf("%.2f ^ %.2f = %.2f\n", N1, N1, Potenciacao1);
    float Potenciacao2 =powf(N2, N2);
    printf("O Valor de sua Potenciacao 2 eh: %.2f\n", Potenciacao2);
    printf("%.2f ^ %.2f = %.2f\n", N2, N2, Potenciacao2);
    float Potenciacao3 = powf(N1, N2);
    printf("O Valor de sua Potenciacao 3 eh: %.2f\n", Potenciacao3);
    printf("%.2f ^ %.2f = %.2f\n", N1, N2, Potenciacao3);
    float Potenciacao4 = powf(N2, N1);
    printf("O Valor de sua Potenciacao 4 eh: %.2f\n", Potenciacao4);
    printf("%.2f ^ %.2f = %.2f\n", N2, N1, Potenciacao4);
    
    // Radiciação
    
    float raizquadrada1 = sqrtf(N1);
    printf("O Valor de sua raiz quadrada 1 eh: %.2f\n", raizquadrada1);
    printf("%.2f ^1/2 %.2f = %.2f\n", N1, raizquadrada1);
    float raizquadrada2 = sqrtf(N2);
    printf("O Valor de sua raiz quadrada 2 eh: %.2f\n", raizquadrada2);
    printf("%.2f ^1/2 %.2f = %.2f\n", N2, raizquadrada2);
    
    // Resto da divisão

    int resto1 = (int) N1 % (int) N2;
    printf("O Valor de seu resto1 eh: %.2f\n", resto1);
    printf("%.0f %% %.0f = %.0f\n", N1, N2, resto1);
    int resto2 = (int) N2 % (int) N1;
    printf("O Valor de seu resto2 eh: %.2f\n", resto2);
    printf("%.0f %% %.0f = %0f\n", N2, N1, resto2);

    // Quociente da divisão

    int quocienteinteiro1 = N1 / (int) N2;
    printf("O Valor de seu quociente inteiro 1 eh: %.2f\n", quocienteinteiro1);
    printf("%.2f // %.2f = %d\n", N1, N2, quocienteinteiro1);
    int quocienteinteiro2 = N2 / (int) N1;
    printf("O Valor de seu quociente inteiro 2 eh: %.2f\n", quocienteinteiro2);
    printf("%.2f // %.2f = %d\n", N2, N1, quocienteinteiro2);
   
    // Incremento

    N1++;
    printf("O Valor de seu incremento 1 eh: %.2f\n", N1);
    printf("%.2f++ = %.2f\n", N1 - 1, N1);
    N2++;
    printf("O Valor de seu incremento 2 eh: %.2f\n", N2);
    printf("%.2f++ = %.2f\n", N2 - 1, N2);

    // Decremento

    N1--;
    printf("O Valor de seu decremento 1 eh: %.2f\n", N1);
    printf("%.2f-- = %.2f\n", N1 + 1, N1);
    N2--;
    printf("O Valor de seu decremento 2 eh: %.2f\n", N2);
    printf("%.2f-- = %.2f\n", N2 + 1, N2);



    return 0;
}