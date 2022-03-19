#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

#define COR_BRANCO  printf("\33[37m");
#define COR_ROXA    printf("\33[35m");

int main()
{
    srand(time(NULL));

    char mat[TAM][TAM], palavra[TAM];
    int lado, lin, col, flag = 0, sort, cont = 0, erro = 0, n;

    do {
        printf("\nPalavra(no max 4 letras): ");
        fflush(stdin);
        gets(palavra);

        for(n = 0; palavra[n] != '\0'; n++){ }
            
    } while(n > 4);
    
    do {

        printf("Direcao(1-Horiz / 2-Vert): ");
        fflush(stdin);
        scanf("%i", &lado);
        
    } while(lado > 2);

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            mat[lin][col] = 65 + rand() % 26;
        }
    }

        for(col = 0; palavra[col] != '\0'; col++)
        {
            if(palavra[col] >= 97 && palavra[col] <= 122)
            {
                palavra[col] = palavra[col] - 32;
            }

            if(lado == 1)
            {
                if(flag == 0)
                {
                    sort = rand() % 5;
                    flag = 1;
                }
                
                mat[sort][col] = palavra[col];
            }

            else
            {
                if(flag == 0)
                {
                    sort = rand() % 5;
                    flag = 1;
                }
                mat[col][sort] = palavra[col];
            }
        }
    

     for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            if(lado == 1 && lin == sort && cont < n)
            {
                COR_ROXA
                printf("%c ",mat[sort][col]);
                COR_BRANCO
                cont++;
            }

            else if(lado == 2 && col == sort && cont < n)
            {
                COR_ROXA
                printf("%c ",mat[lin][sort]);
                COR_BRANCO
                cont++;
            }

            else
            {
                printf("%c ",mat[lin][col]);
            }
        }
    }

    printf("\n\n");
    return 0;
}