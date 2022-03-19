#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, vetor[12], maior, menor, pos_maior, pos_menor, flag;

    flag = 0;

    printf("Vetor Aleatorio: ");

    for(num = 0; num < 12; num++)
    {
        vetor[num] = 10 + rand() % 90;
        printf("%i ", vetor[num]);

        if(flag == 0)
        {
            maior = vetor[0];
            pos_maior = 0;
            menor = vetor[0];
            pos_menor = 0;
            flag++;
        }
        if(vetor[num] > maior)
        {
            maior = vetor[num];
            pos_maior = num;
        }
        if(vetor[num] < menor)
        {
            menor = vetor[num];
            pos_menor = num;
        }
    }

    printf("\n- Maior elemento: %i / Posicao: %i", maior, pos_maior);
    printf("\n- Menor elemento: %i / Posicao: %i", menor, pos_menor);

    printf("\n\n");
    return 0;
}