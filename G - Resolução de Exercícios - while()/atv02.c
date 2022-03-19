#include <stdio.h>

int main() {

    int lar, alt, cont_1, cont_2;

    printf("Largura e Altura: ");
    scanf("%i %i", &lar, &alt);

    if(lar < 0 || alt < 0)
    {
        printf("\n\tNumero Invalido");
    }

    else
    {
        cont_1 = 1;

        while(cont_1 <= alt)
        {
            cont_2 = 1;

            printf("\n\t");

            while(cont_2 <= lar)
            {
                printf(" * ");
                cont_2++;
            }
            cont_1++;
        }
    }
    printf("\n\n");
    return 0;
}