#include <stdio.h>

int main() {

    char palavra[100], dica1[100], dica2[100], under[100], letra;
    int flag, erros, dicas, cont_palavra, fim, flag_palavra, jogada, cont_letra;

    flag = 0;
    flag_palavra = 0;
    fim = 0;
    erros = 0;
    dicas = 2;
    jogada = 0;
    cont_letra = 0;

    if(flag == 0)
    {
        printf("Palavra: ");
        fflush(stdin);
        gets(palavra);

        printf("Dica 1: ");
        fflush(stdin);
        gets(dica1);

        printf("Dica 2: ");
        fflush(stdin);
        gets(dica2);

        flag = 0;

        system("cls");
    }

    for(cont_palavra = 0; palavra[cont_palavra] != '\0'; cont_palavra++)
    {
        under[cont_palavra] = '_';
    }

    do
    {
        printf("\t-------------------------------------------------");
        printf("\n\t--------------------- FORCA ---------------------");
        printf("\n\t-------------------------------------------------");
        printf("\n\t---- Total de erros: %i | Dicas Disponives: %i ----", erros, dicas);
        printf("\n\t-------------------------------------------------");

        for(cont_palavra = 0; under[cont_palavra] != '\0'; cont_palavra++)
        {
            if(flag_palavra == 0)
            {
                printf("\n\t----- Palavra: ");
                flag_palavra = 1;
            }
            printf("%c ", under[cont_palavra]);
        }
        flag_palavra = 0;

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

/*
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

            for(cont_palavra = 0; palavra[cont_palavra] != '\0'; cont_palavra++)
            {
                if(letra == palavra[cont_palavra])
                {
                    under[cont_palavra] = letra;
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
        }
*/


        system("cls");
    } while (fim == 1);
    
    




    printf("\n\n");
    return 0;
}