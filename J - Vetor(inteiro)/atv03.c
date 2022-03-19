#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, vetor[4], soma, media;
    
    soma = 0;

    printf("Vetor aleatorio: ");

    for(num = 0; num < 4; num++)
    {
        vetor[num] = 10 + rand() % 90;
        printf("%i ", vetor[num]);

        soma = soma + vetor[num];
    }
    media = soma / 4;

    printf("\n- Valor medio: %i", media);

    printf("\n\n");
    return 0;
}