#include <stdio.h>

int main() {

    int n1, n2, cont_1, cont_2, soma = 0, num_1;

    do{
        if(n1>n2)
        {
            printf("Valores Incorretos.");
        }

        printf("\nDigite 2 valores inteiros: ");
        scanf("%i %i", &n1, &n2);

    } while(n1>n2);

    printf("Somando valores pares: ");

    cont_2 = 1;

    for(cont_1 = n1; cont_1<=n2; cont_1++)
    {
        if(cont_1%2==0 && cont_1!=n1 && cont_1!=n2 && cont_2==1)
        {
            printf("%i", cont_1);

            cont_2++;

            num_1 = cont_1;

            soma = soma + num_1;
        }
        else if(cont_1%2==0 && cont_1!=n1 && cont_1!=n2 && cont_2>1)
        {
            printf(" + %i", cont_1);

            num_1 = cont_1;

            soma = soma + num_1;
        }
    }
    printf(" = %i", soma);

    printf("\n\n");
    return 0;
}