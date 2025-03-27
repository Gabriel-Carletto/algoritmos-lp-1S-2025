#include <stdio.h>

int main(int argc, char* argv[]){
    
    int idade;
    float altura;
    double peso;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite o peso: ");
    scanf("%f", &peso);
    getchar();
    printf("Digite a altura: ");
    scanf("%f", &altura);
    getchar();

     printf("A idade eh: %d\n", idade); 
    printf("A altura eh: %.2f\n", altura);
    printf ("O peso eh: %.2f\n", peso);
    return 0;
}