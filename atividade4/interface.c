#include <stdio.h>

int main(int argc, char* argv[]) {

    printf("_________________________________________________________________________________\n");
    printf("Iniciando Assistente virtual para filmes, por favor aguarde .....................\n");
    printf("_________________________________________________________________________________\n");
    printf("Ola, sou seu assistente virtual para ajudar a voce a escolher filmes!\n");
    printf("_________________________________________________________________________________\n");

    // Variáveis
    int tipo_de_filme;
    int genero_calmo;
    int genero_intenso;
    int opcao_final;
        do{
        printf("Se quiser assistir um filme calmo digite 8.\n");
        printf("Se quiser assistir um filme intenso digite 9.\n");
        printf("Digite o tipo de filme que voce quer assistir: ");
        scanf("%d", &tipo_de_filme);

        if (tipo_de_filme == 9) {

            printf("_________________________________________________________________________________\n");
            printf("Se quiser assistir um filme de acao digite 1.\n");
            printf("Se quiser assistir um filme de suspense digite 2.\n");
            printf("Se quiser assistir um filme de terror digite 3.\n");
            printf("Digite o genero: ");
            scanf("%d", &genero_intenso);

            if (genero_intenso == 1) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Acao! Recomendacoes:\n");
                printf("Batman, Vingadores, Gladiador, Matrix, etc.\n");
            } else if (genero_intenso == 2) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Suspense! Recomendacoes:\n");
                printf("O Silencio dos Inocentes, A Origem, Seven, etc.\n");
            } else if (genero_intenso == 3) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Terror! Recomendacoes:\n");
                printf("O Exorcista, Invocacao do Mal, Psicose, etc.\n");
            } else {
                printf("Genero invalido.\n");
            }

        } else if (tipo_de_filme == 8) {

            printf("_________________________________________________________________________________\n");  
            printf("Se quiser animacao digite 4.\n");
            printf("Se quiser comedia digite 5.\n");
            printf("Se quiser ficcao cientifica digite 6.\n");
            printf("Digite o genero: ");
            scanf("%d", &genero_calmo);

            if (genero_calmo == 4) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Animacao! Recomendacoes:\n");
                printf("Sonic, Minecraft, etc.\n");
            } else if (genero_calmo == 5) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Comedia! Recomendacoes:\n");
                printf("Gente Grande, Click, etc.\n");
            } else if (genero_calmo == 6) {

                printf("_________________________________________________________________________________\n");
                printf("Voce selecionou Ficcao! Recomendacoes:\n");
                printf("Interestelar, Maze Runner, Blade Runner, etc.\n");
            } else {
                printf("Genero invalido.\n");
            }

        } else {
            printf("Tipo de filme invalido.\n");
        }
       


        printf("Deseja escolher um novo filme?\n");
        printf("Se sim digite 0 .\n");
        printf("Se nao digite 1 .\n");
        scanf("%d", &opcao_final);
    
    
}
        while (opcao_final == 0);
        if (opcao_final == 1) {
            printf("_________________________________________________________________________________\n");
            printf("Encerrando o processo de recomendacao de filmes, obrigado por utilizar minha interface!\n");
            printf("                         ASS: G. L. C.\n");
            printf("_________________________________________________________________________________\n");
            }

        return 0;
}
