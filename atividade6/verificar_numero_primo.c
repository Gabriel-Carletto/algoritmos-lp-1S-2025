#include <stdio.h>
#include <math.h>

    // inclusão da biblioteca MATH.H para utilzar a função sqrt() .

int main(int argc, char* argv[]){

    int Numeros = 0;
    

    printf("Inicializando verificador de numeros primos, favor aguardar...\n");

    printf(".\n");

    printf("Programa iniciado.\n");

    // utilização do printf e do scanf para o usuário digitar um número qualquer e esse número focar armazenado na variável Numeros.
    printf("Digite um numero qualquer: \n");
    scanf( "%d", &Numeros);

    // Utilização da função if para determinar se um número é primo ou não.
     
     if (Numeros <= 1){
        printf("%d O seu numero nao eh primo\n", Numeros);
     }
    
     else if (Numeros == 2){
        printf("%d O numero 2 eh o unico par primo, logo seu numero eh primo!\n", Numeros);
     }
     
     else if (Numeros % 2 == 0){
        printf("%d o seu numero eh par e maior do que 2, logo seu numero nao eh primo.\n", Numeros);
     }
     int Limite = sqrt(Numeros);
     for (int i = 3; i <= Limite; i += 2) {
        
        if (Numeros % i == 0){
            printf("%d o seu numero nao eh primo.", Numeros);
       }
        else{
            printf("%d o seu numero eh primo!!!!!");
        }
     }
    return 0;
}