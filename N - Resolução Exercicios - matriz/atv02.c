#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {

    srand(time(NULL));

    int mat1[TAM][TAM], mat2[TAM][TAM], calc[TAM][TAM], lin, lin2, col, col2, soma, mult;

    soma = 0;

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            mat1[lin][col] = 2 + rand() % 4;
            mat2[lin][col] = 2 + rand() % 3;
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            soma = 0;
            for(col2 = 0, lin2 = 0; col2 < TAM; col2++, lin2++)
            {
                mult = mat1[lin][col2] * mat2[lin2][col];
                soma = soma + mult;
            }
            calc[lin][col] = soma;
        }
    }



    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            printf("%i ", mat1[lin][col]);
        }

        if(lin != 1)
        {
            printf("       ");
        }

        if(lin == 1)
        {
            printf("   x   ");
        }

        for(col = 0; col < TAM; col++)
        {
            printf("%i ", mat2[lin][col]);
        }
        
        if(lin != 1)
        {
            printf("      ");
        }

        if(lin == 1)
        {
            printf("  =   ");
        }

        for(col = 0; col < TAM; col++)
        {
            printf("%i ", calc[lin][col]);
        }
    }

    printf("\n\n");
    return 0;
}