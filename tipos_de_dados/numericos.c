#include <stdio.h>

int main(int argc, char* argv[]){
    
    int idade = 18;
    float altura = 2.34;
    double peso = 72.56;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("A idade eh: %d\n", idade); 
    printf("A altura eh: %.2f\n", altura);
    printf ("O peso eh: %.2f\n", peso);
    return 0;
}