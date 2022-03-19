#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int num, vetor[12], flag, quant_1, quant_2;

    flag = 0;
    quant_1 = 0;
    quant_2 = 0;

    printf("Vetor Aleatorio: ");

    for(num = 0; num < 12; num++)
    {
        vetor[num] = 10 + rand() % 40;
        printf("%i ", vetor[num]);

        if(vetor[num] > 20 && vetor[num] < 40)
        {
            quant_1++;
        }
        if(vetor[num] > 35)
        {
            quant_2++;
        }
    }

    printf("\n- Quantidade de numeros entre 20 e 40: %i", quant_1);

    for(num = 0; num < 12; num++)
    {
        if(flag == 0)
        {
            printf("\n- Numeros pares: ");
            flag++;
        }
        if(vetor[num] % 2 == 0)
        {
            printf("%i ", vetor[num]);
        }
    }

    printf("\n- Quantidade de numeros maiores que 35: %i", quant_2);

    printf("\n\n");
    return 0;
}