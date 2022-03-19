#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6, cont = 1, menor;

    printf("Numeros: ");
    scanf("%i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6);

    printf("- Ordenado ");

    while(cont<=n1||cont<=n2||cont<=n3||cont<=n4||cont<=n5||cont<=n6)
    {
        if(cont==n1)
        {
            printf("%i ", n1);
        }
        if(cont==n2)
        {
            printf("%i ", n2);
        }
        if(cont==n3)
        {
            printf("%i ", n3);
        }
        if(cont==n4)
        {
            printf("%i ", n4);
        }
        if(cont==n5)
        {
            printf("%i ", n5);
        }
        if(cont==n6)
        {
            printf("%i ", n6);
        }

        cont++;
    }

    return 0;
}