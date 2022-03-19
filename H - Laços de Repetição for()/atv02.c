#include <stdio.h>

int main() {

    int num_term, cont, n1 = 1, n2 = 1, n3;

    printf("Numero de termos: ");
    scanf("%i", &num_term);

    printf("- Serie de Fibonacci[%i]: ", num_term);

    for(cont = 2; cont<num_term; cont++)
    {
        if(cont==2)
        {
            printf("%i %i ", n1, n2);
        }
        
        n3 = n1 + n2;

        printf("%i ", n3);
        
        n1 = n2;
        n2 = n3;
    }

    printf("\n\n");
    return 0;
}