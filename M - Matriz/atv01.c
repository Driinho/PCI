#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    srand(time(NULL));

    int lin, col, matriz[TAM][TAM], matriz_tran[TAM][TAM];

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            matriz[lin][col] = 10 + rand() % 41;
        }
    }

    printf("Matriz Aleatoria: \n");

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            printf("%i ", matriz[lin][col]);
        }
    }

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            matriz_tran[col][lin] = matriz[lin][col];
        }
    }

    printf("\n\nMatriz Transposta: \n");

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            printf("%i ", matriz_tran[lin][col]);
        }
    }

    printf("\n\n");
    return 0;
}