#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define TAM 15

int main() {

    int let, repet = 0;
    char letras[TAM];

    printf("Vetor aleatorio: ");

    srand(time(NULL));

    for(let = 0; let < TAM; let++)
    {
        letras[let] = 65 + rand() % 25;
        printf("%c ", letras[let]);
    }

    for(let = TAM - 1; let >= 0; let--)
    {
        for(repet = TAM - 1; repet >=0; repet--)
        {
            if(letras[let] == letras[repet] && let != repet)
            {
                letras[let] = 64;
            }
        }
    }

    printf("\n- Vetor aleatorio: ");

    for(let = 0; let < TAM; let++)
    {
        printf("%c ", letras[let]);
    }

    printf("\n\n");
    return 0;
}