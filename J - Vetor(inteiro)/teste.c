#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, num_ord, vetor[12], cont, maior;

    maior = 0;

    printf("Vetor aleatorio: ");

    for(num = 0; num < 12; num++)
    {
        vetor[num] = 10 + rand() % 90;
        printf("%i ", vetor[num]);

        if(vetor[num] > maior)
        {
            maior = vetor[num];
        }
    }

    printf("\n- Valor ordenado: ");
    
    for(num = 0; num < 12; num++)
    {
        if(maior == vetor[num])
        {
            vetor[num_ord] = maior;
        }
    }

    printf("\n _ Maior: %i", vetor[num_ord]);

    printf("\n\n");
    return 0;
}