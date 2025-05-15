#include <stdio.h>
#include <math.h>

    // inclusão da biblioteca MATH.H para utilzar a função sqrt() .

int main(int argc, char* argv[]){

     long long int Numeros = 0;
    int ehPrimo = 1;

    printf("Inicializando verificador de numeros primos, favor aguardar...\n");

    printf(".\n");

    printf("Programa iniciado.\n");

    // utilização do printf e do scanf para o usuário digitar um número qualquer e esse número focar armazenado na variável Numeros.
    printf("Digite um numero qualquer: \n");
    scanf( "%d", &Numeros);

    // Utilização da função if para determinar se um número é primo ou não.
     
     if (Numeros <= 1){
        printf("%lld O seu numero nao eh primo\n", Numeros);
        return 0;
     }
    
     else if (Numeros == 2){
        printf("%lld O numero 2 eh o unico par primo, logo seu numero eh primo!\n", Numeros);
        return 0;
     }
     
     else if (Numeros % 2 == 0){
        printf("%lld o seu numero eh par e maior do que 2, logo seu numero nao eh primo.\n", Numeros);
        return 0; // adiciona um return 0 para evitar execuções desnecessárias.
     }
     
     
     
     int Limite = sqrt(Numeros);
     for (int i = 3; i <= Limite; i += 2) { 
       // utilizei o (i += 2) ao invés do i++ para uma eficiencia maior e evitar iteraçoes desnecessárias.
       if (Numeros % i == 0) {
        ehPrimo = 0; // ao marcar o valor como 0, o programa identifica como nao primo.
        break; // utilizando o break para sair do loop assim que encontrar um divisor.
       }
}
    if(ehPrimo) {
        printf("%lld o seu numero eh primo!\n", Numeros);
    }
    else{
        printf("%lld o seu numero nao eh primo.\n", Numeros);
    }
    return 0;
}