#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {

    srand(time(NULL));

    int matriz[TAM][TAM], col, lin, linha, valor;

    for(lin = 0; lin < TAM; lin++)
    {
        for(col = 0; col < TAM; col++)
        {
            matriz[lin][col] = 10 + rand() % 41;
        }
    }

    printf("Matriz aleatoria: ");

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");
        for(col = 0; col < TAM; col++)
        {
            printf("%i ", matriz[lin][col]);
        }
    }

    printf("\n\n- Escolha uma linha: ");
    scanf("%i", &linha);
    printf("- Escolha um valor: ");
    scanf("%i", &valor);

    printf("\nMatriz modificada: ");

    for(lin = 0; lin < TAM; lin++)
    {
        printf("\n\t");

        for(col = 0; col < TAM; col++)
        {
            if(lin == linha)
            {
                printf("%i ", matriz[lin][col]);
            }
            else
            {
                printf("%i ", valor);
            }
        }
    }

    printf("\n\n");
    return 0;
}