#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int i, num, flag_maior = 1, flag_menor = 1, maior, menor, media;

    printf("Valores Aleatorios: ");
    for(i = 0; i < 10; i++)
    {
        num = 10 + rand() % 90;
        printf("%i ", num);

        if(flag_maior==1)
        {
            maior = num;
            flag_maior++;
        }
        else if(num>maior)
        {
            maior = num;
        }
        if(flag_menor==1)
        {
            menor = num;
            flag_menor++;
        }
        else if(num<menor)
        {
            menor = num;
        }

        media = (maior + menor) / 2;
    }
    printf("\n");

    printf("- Maior: %i", maior);
    printf("\n- Menor: %i", menor);
    printf("\n- Media: %i", media);

    printf("\n\n");
    return 0;
}