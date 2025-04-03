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
    

    if (IMC < 18.5){
        printf("Voce está abaixo do peso! bora comer irmao? \n ");}

    if ( 18.5 <= IMC && IMC <= 24.9 ){
        printf("Voce esta com peso ideal! \n");}

    if (25 <= IMC && IMC <= 29.9){
        printf("Voce esta com sobrepeso! hora de dieta e malhar! Ficar bem eh bom para o corpo! \n");}

    if (30 <= IMC && IMC <= 34.9){
        printf("Voce esta com obesidade 1! alerta! recomendasse procurar um medico! \n");}
    
    if (35 <= IMC && IMC <= 39.9){
        printf("Voce esta com obesidade 2! Va procurar um medico imediatamente! \n");}

    if (IMC > 39.9){
        printf("Voce esta com obesidade 3! Como ce ta vivo irmao? \n");}
    
    return 0;
}