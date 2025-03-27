#include <stdio.h>

int main(int argc, char* argv[]){
   
    float altura;
    float peso;
   
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("A altura eh: %.2f\n", altura);
    printf ("O peso eh: %.2f\n", peso);

    float IMC = peso / (altura * altura);
    printf("O seu valor de IMC eh: %.2f\n", IMC);
    
    return 0;
}