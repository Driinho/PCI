#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int erros, flag, dicas, cont, fim, jogada, dica, flag_dica, sorteio, flag_palavra, cont_teste, cont_palavra, adiv, flag_erro, cont_letra;
    char palavra[50], tema[50], under[50], adivinhar[50], perna, letra;

    erros = 0;
    flag = 1;
    dicas = 2;
    fim = 0;
    jogada = 0;
    dica = 0;
    flag_dica = 0;
    flag_palavra = 0;
    cont_teste = 0;
    flag_erro = 0;
    perna = 92;
    cont_letra = 0;

    if(flag == 1)
    {
        printf("\nPalavra: ");
        fflush(stdin);
        gets(palavra);

        printf("Tema: ");
        fflush(stdin);
        gets(tema);

        flag = 0;

        system("cls");
    }

    for(cont_palavra = 0; palavra[cont_palavra] != '\0'; cont_palavra++) { }

    for(cont = 0; palavra[cont] != '\0'; cont++)
    {
        under[cont] = '_';
    }
    under[cont] = '\0';

    do {

        printf("\t-------------------------------------------------");
        printf("\n\t--------------------- FORCA ---------------------");
        printf("\n\t-------------------------------------------------");
        printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
        printf("\n\t-------------------------------------------------");
        if(flag_dica == 1 || flag_dica == 3 && dicas < 2)
        {
            printf("\n\t----- 1 Dica: %s", tema);
        }

        printf("\n\t----- Palavra: ");

        if(flag_dica == 2 || flag_dica == 3 && dicas < 2 && flag_palavra == 1)
        {
            for(cont = 0; under[cont] != '\0'; cont++)
            {
                printf("%c ", under[cont]);
            }
        }

        if(flag_palavra == 0)
        {
            for(cont = 0; under[cont] != '\0'; cont++)
            {
                printf("%c ", under[cont]);
            }
        }

        printf("\n\t-------------------------------------------------");
        printf("\n\t--- 1) Efetuar jogada ---------------------------");
        if(dicas > 0)
        {
            printf("\n\t--- 2) Solicitar dica ---------------------------");
        }
        else
        {
            printf("\n\t--- Suas dicas acabaram -------------------------");
        }
        printf("\n\t--- 3) Adivinhar palavra ------------------------");
        printf("\n\t--- 4) Visualizar forca -------------------------");
        printf("\n\t-------------------------------------------------");
        printf("\n\t> ");
        fflush(stdin);
        scanf("\n\t%i", &jogada);

        switch (jogada)
        {
        
        case 1:
            printf("\tDigite uma letra (a-z): ");
            fflush(stdin);
            scanf("%c", &letra);

            if(letra > 64 && letra < 91)
            {
                letra = letra + 32;
            }

            for(cont = 0; palavra[cont] != '\0'; cont++)
            {
                if(letra == palavra[cont])
                {
                    under[cont] = letra;
                    cont_letra++;
                }
            }
            if(cont_letra > 0)
            {
                cont_letra = 0;
                break;
            }
            else
            {
                erros = erros + 1;
                break;
            }

        case 2:
            if(dicas > 0)
            {
                system("cls");
                printf("\n\tSelecione uma dica");
                if(flag_dica == 0)
                {
                    printf("\n\t1) Dica 1: Tema");
                    printf("\n\t2) Dica 2: Mostrar uma letra");
                    printf("\n\t> ");
                    fflush(stdin);
                    scanf("%i", &dica);
                }
                else if(flag_dica == 1)
                {
                    printf("\n\t2) Dica 2: Mostrar uma letra");
                    printf("\n\t> ");
                    fflush(stdin);
                    scanf("%i", &dica);
                }
                else if(flag_dica == 2)
                {
                    printf("\n\t1) Dica 1: Tema");
                    printf("\n\t> ");
                    fflush(stdin);
                    scanf("%i", &dica);
                }

                if(dica == 1)
                {
                    flag_dica++;
                    dicas--;
                }
                if(dica == 2)
                {
                    do{
                        sorteio = rand() % cont;

                    }while(under[sorteio] != '_' );

                    under[sorteio] = palavra[sorteio];
                    flag_dica = flag_dica + 2;
                    dicas--;
                    flag_palavra = 1;
                }
                break;
            }
            else
            {
                break;
            }

            case 3:
                printf("\n\t> Digite a palavra: ");
                fflush(stdin);
                gets(adivinhar);

                for(adiv = 0; adivinhar[adiv] == palavra[adiv] && adivinhar[adiv] != '\0'; adiv++) 
                { 
                    cont_teste++;
                }
                if(cont_palavra == cont_teste)
                {
                    fim = 1;
                }
                else
                {
                    fim = 1;
                }
            break;

            case 4:
                if(erros == 0)
                {
                    printf("\n\t\t\t\t___");
                }
                else if(erros == 1)
                {
                    printf("\n\t\t\t\t___");
                    printf("\n\t\t\t\t O ");
                }
                else if(erros == 2)
                {
                    printf("\n\t\t\t\t___");
                    printf("\n\t\t\t\t O ");
                    printf("\n\t\t\t\t | ");
                }
                else if(erros == 3)
                {
                    printf("\n\t\t\t\t___");
                    printf("\n\t\t\t\t O ");
                    printf("\n\t\t\t\t | ");
                    printf("\n\t\t\t\t/ %c", perna);
                }
                else if(erros == 4)
                {
                    printf("\n\t\t\t\t___");
                    printf("\n\t\t\t\t O ");
                    printf("\n\t\t\t\t/|%c", perna);
                    printf("\n\t\t\t\t/ %c", perna);
                } 

                printf("\n\tDigite 1 para voltar ");
                printf("\n\t> ");
                fflush(stdin);
                scanf("\n\t%i", &flag_erro);

                break;
        }

        system("cls");

    }while(fim == 0 && erros < 4);

    if(cont_palavra == cont_teste)
    {
        printf("\t-------------------------------------------------");
        printf("\n\t--------------------- FORCA ---------------------");
        printf("\n\t-------------------------------------------------");
        printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
        printf("\n\t-------------------------------------------------");
        printf("\n\t----- 1 Dica: %s", tema);
        printf("\n\t----- Palavra: ");
        for(cont = 0; palavra[cont] != '\0'; cont++)
        {
            printf("%c ", palavra[cont]);
        }
        printf("\n\t-------------------------------------------------");
        printf("\n\t------------------- Voce Ganhou -----------------");
        printf("\n\t-------------------------------------------------");
    }
    else
    {
        printf("\t-------------------------------------------------");
        printf("\n\t--------------------- FORCA ---------------------");
        printf("\n\t-------------------------------------------------");
        printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
        printf("\n\t-------------------------------------------------");
        printf("\n\t----- 1 Dica: %s", tema);
        printf("\n\t----- Palavra: ");
        for(cont = 0; palavra[cont] != '\0'; cont++)
        {
            printf("%c ", palavra[cont]);
        }
        printf("\n\t-------------------------------------------------");
        printf("\n\t------------------- Voce Perdeu -----------------");
        printf("\n\t-------------------------------------------------");
    }

    printf("\n\n");
    return 0;
}