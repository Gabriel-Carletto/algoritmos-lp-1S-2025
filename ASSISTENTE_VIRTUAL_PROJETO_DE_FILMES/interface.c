#include <stdio.h>

int main(int argc, char* argv[]){

    printf("_________________________________________________________________________________\n");
    printf("Iniciando Assistente virtual para filmes, por favor aguarde .....................\n");
    printf("_________________________________________________________________________________\n");
    printf("Ola, sou seu assistente virtual para ajudar a voce a escolher filmes, por favor siga as instrucoes e descubra novos filmes! \n");
    printf("_________________________________________________________________________________\n");

    //Seção para a escolha o tipo de filme: calmo, intenso.
    
    float Tipo_de_filme;
    float Generos_calmos;   
    float Generos_intensos;   

    printf("_________________________________________________________________________________\n");
    printf("Se quiser assistir um filme calmo digite 8. \n");
    printf("Se quiser assistir um filme intenso digite 9. \n");
    printf("_________________________________________________________________________________\n");
    printf("Digite o tipo de filme que voce quer assistir: \n");
    scanf("%c", &Tipo_de_filme);

    if (Tipo_de_filme == 9){

        printf("_________________________________________________________________________________\n");
        printf("Se quiser assistir um filme de acao digite 1. \n");
        printf("Se quiser assistir um filme de suspense digite 2. \n");
        printf("Se quiser assistir um filme de terror digite 3. \n");
        printf("_________________________________________________________________________________\n");
        
        printf("Digite o genero de filme que voce quer assistir: \n");
        scanf("%f", &Generos_intensos);

        if(Generos_intensos == 1);{
        
                printf("Voce selecionou o genero de acao! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Batman: O Cavaleiro Das Trevas. \n");
                printf(" Vingadores: Guerra Infinita. \n");
                printf(" Vingadores: Ultimato. \n");
                printf(" Gladiador. \n");
                printf(" Bastardos Inglorios. \n");
                printf(" Matrix. \n");
                printf(" Top Gun: Maverick. \n");
                printf("_________________________________________________________________________________\n");
                
            if(Generos_intensos == 2){
        
                printf("Voce selecionou o genero de suspense! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Batman: O Cavaleiro Das Trevas. \n");
                printf(" O Silencio dos Inocentes. \n");
                printf(" A Origem. \n");
                printf(" O Sexto Sentido. \n");
                printf(" Seven: Os Sete Crimes Capitais. \n");
                printf(" Psicose. \n");
                printf(" Tropa de Elite. \n");
                printf("_________________________________________________________________________________\n");
                }

            if(Generos_intensos == 3){
        
                printf("Voce selecionou o genero de Terror! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Psicose. \n");
                printf(" O Exorcista. \n");
                printf(" Invocacao do Mal. \n");
                printf(" O Iluminado. \n");
                printf(" Alien: O Oitavo Passageiro. \n");
                printf(" Entrevista com um Vampiro. \n");
                printf(" Constantine. \n");
                printf("_________________________________________________________________________________\n");
                }


    }
    }else if(Tipo_de_filme == 8);{

        printf("_________________________________________________________________________________\n");
        printf("Se quiser assistir um filme de animacao digite 4. \n");
        printf("Se quiser assistir um filme de comedia digite 5. \n");
        printf("Se quiser assistir um filme de ficcao cientifica digite 6. \n");
        printf("_________________________________________________________________________________\n");
        
        printf("Digite o genero de filme que voce quer assistir: \n");
        scanf("%f", &Generos_calmos);

            if(Generos_calmos == 4){
        
                printf("Voce selecionou o genero de animacao! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Sonic 1. \n");
                printf(" Sonic 2. \n");
                printf(" Sonic 3. \n");
                printf(" Minecraft O Filme. \n");
                printf(" Dragon Ball Revolution. \n");
                printf("_________________________________________________________________________________\n");
                }

            if(Generos_calmos == 5){
        
                printf("Voce selecionou o genero de comedia! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Gente Grande 1. \n");
                printf(" Gente Grande 2. \n");
                printf(" Gente Grande 3. \n");
                printf(" Pixels. \n");
                printf(" Click. \n");
                printf("_________________________________________________________________________________\n");
                }    

            if(Generos_calmos == 6){
        
                printf("Voce selecionou o genero de ficcao cientifica! Aqui estao algumas recomendacoes!:\n");
                printf("_________________________________________________________________________________\n");
                printf(" Senhor Dos Aneis: A Sociedade do Anel. \n");
                printf(" Blade Runner. \n");
                printf(" Maze runner. \n");
                printf(" Pixels. \n");
                printf(" Interestellar. \n");
                printf("_________________________________________________________________________________\n");
                }    

    } 
    
  
       


























    return 0;
}