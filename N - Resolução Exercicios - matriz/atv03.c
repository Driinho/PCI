#include <stdio.h>

int main() {

    int num, lin, col, aux;

    do {
        printf("\nNumero Impar: ");
        fflush(stdin);
        scanf("%i", &num);

        if(num % 2 == 0)
        {
            printf("Numero Invalido!!");
        }

    } while(num % 2 == 0);

    aux = num - 1;
    aux = aux / 2;

    for(lin = 0; lin < num; lin++)
    {
        printf("\n\t");
        for(col = 0; col < num; col++)
        {
            if(lin == 0)
            {
                printf("* ");
            }
            else if(col == 0)
            {
                printf("* ");
            }
            else if(lin == num - 1)
            {
                printf("* ");
            }
            else if(lin == col && aux == lin)
            {
                printf("* ");
            }
            else if(col < num - 1)
            {
                printf("  ");
            }
            else if(col == num - 1)
            {
                printf("* ");
            }
        }
    }

    printf("\n\n");
    return 0;
}