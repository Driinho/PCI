#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int cont1, cont2, num, lin = 3, col = 3, maior, menor, flag1 = 0, flag2 = 0;

    printf("\n\t");

    for(cont1 = 0; cont1<=lin; cont1++)
    {
        for(cont2 = 0; cont2<=col; cont2++)
        {
            num = 10 + rand() % 90;
            printf("%i ", num);

            if(cont1<cont2)
            {
                if(flag1 == 0)
                {
                    maior = num;
                    flag1++;
                }
                else if(num > maior)
                {
                    maior = num;
                }
            }
            if(cont1>cont2)
            {
                if(flag2 == 0)
                {
                    menor = num;
                    flag2++;
                }
                else if(num<menor)
                {
                    menor = num;
                }
            }
        }
        printf("\n\t");
    }
    
    printf("\n- Maior acima da diagonal: %i", maior);
    printf("\n- Menor abaixo da diagonal: %i", menor);

    printf("\n\n");
    return 0;
}