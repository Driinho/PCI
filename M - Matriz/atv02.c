#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    srand(time(NULL));

    int lin, col, matriz[TAM][TAM], maior, flag = 0;

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
            if(flag == 0 && lin == col)
            {
                maior = matriz[lin][col];
                flag = 1;
            }
            else
            {
                if(lin == col && matriz[lin][col] > maior)
                {
                    maior = matriz[lin][col];
                }
            }
        }
    }
    
    printf("\n\nMaior Valor: %i", maior);

    printf("\n\n");
    return 0;
}