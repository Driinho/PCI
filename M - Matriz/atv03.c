#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    srand(time(NULL));

    int lin, col, matriz[TAM][TAM], col_1, lin_1, aux;

    for(col = 0; col < TAM; col++)
    {
        for(lin = 0; lin < TAM; lin++)
        {
            matriz[col][lin] = 10 + rand () % 41;
        }
    }

    printf("Matriz aleatoria: \n");

    for(col = 0; col < TAM; col++)
    {
        printf("\n\t");
        for(lin = 0; lin < TAM; lin++)
        {
            printf("%i ", matriz[col][lin]);            
        }
    }

    printf("\nMatriz ordenada: ");

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            for(lin_1 = 0; lin_1 < TAM; lin_1++)
            {
                for(col_1 = 0; col_1 < TAM; col_1++)
                {
                    if(matriz[lin][col] < matriz[lin_1][col_1])
                    {
                        aux = matriz[lin_1][col_1];
                        matriz[lin_1][col_1] = matriz[lin][col];
                        matriz[lin][col] = aux; 
                    }
                }
            }
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            printf("%i ", matriz[lin][col]);
        }
    }

    printf("\n\n");
    return 0;
}