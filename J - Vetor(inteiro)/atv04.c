#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, ord, vetor[12], maior;

    printf("- Vetor aleatorio: ");

    for(num = 0; num < 12; num++)
    {
        vetor[num] = 10 + rand() % 90;
        printf("%i ", vetor[num]);
    }

    for(num = 0; num < 12; num++)
    {
        for(ord = num + 1; ord < 12; ord++)
        {
            if(vetor[num] < vetor[ord])
            {
                maior = vetor[ord];
                vetor[ord] = vetor[num];
                vetor[num] = maior;
            }
        }
    }

    printf("\n- Vetor ordenado: ");

    for(num = 0; num < 12; num++)
    {
        printf("%i ", vetor[num]);
    }

    printf("\n\n");
    return 0;
}