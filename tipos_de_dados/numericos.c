#include <stdio.h>

int main(int argc, char* argv[]){
    
    int idade;
    double altura;
    double peso;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    

    printf("A idade eh: %d\n", idade); 
    printf("A altura eh: %.2f\n", altura);
    printf ("O peso eh: %.2f\n", peso);

    float dobro_peso = peso * 2;
    float IMC = peso / (altura * altura);
    
    printf("O seu valor de IMC eh: %.2f")
    return 0;
}