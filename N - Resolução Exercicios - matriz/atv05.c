#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

#define COR_BRANCO  printf("\33[37m");
#define COR_ROXA    printf("\33[35m");


int main() 
{
    srand(time(NULL));
    char mat[TAM][TAM], palavra1[TAM], palavra2[TAM];
    int d1, d2, lin, col, me[TAM][TAM] = {{0},{0}}, sort = 0, flag = 0, cont = 0, n, n1, arm = 0, erro = 0, erro1 = 0;

    d1 = rand() % TAM;
    d2 = rand() % TAM;
    
    do {
        printf("\nDigite a primeira palavara(max  4 letras): ");
        fflush(stdin);
        gets(palavra1); 
       
        for(n = 0; palavra1[n] != '\0'; n++) { }
        
    } while(n > 4);
    

    do {
        printf("Digite a segunda palavara(max  4 letras): ");
        fflush(stdin);
        gets(palavra2); 
        
        for(n1 = 0; palavra2[n1] != '\0'; n1++) { }

    } while(n1 > 4);

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            mat[lin][col] = 65 + rand() % 26;
            
        }
    }

    for(col = 0; palavra1[col] != '\0'; col++)
    {
        if(palavra1[col] >= 97 && palavra1[col] <= 122)
        {
            palavra1[col] = palavra1[col] - 32;
        }

        mat[d1][col] = palavra1[col];
        me[d1][col] = 1;
    }

    for(col = 0; palavra2[col] != '\0'; col++)
    {
        if(palavra2[col] >= 97 || palavra2[col] <= 122)
        {
            cont++;
        }
    }
    
    for(col = 0; col < cont; col++)
    {
        while(me[col][d2] == 1)
        {
           d2 = rand() % TAM; 
        }        
    }

    for(col = 0; palavra2[col] != '\0'; col++)
    {
        if(palavra2[col] >= 97 || palavra2[col] <= 122)
        {
            palavra2[col] = palavra2[col] - 32;
            mat[col][d2] = palavra2[col];
            me[col][d2] = 1;
           
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            if(me[lin][col] == 1)
            {
                COR_ROXA
                printf("%c ",mat[lin][col]);
                COR_BRANCO
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