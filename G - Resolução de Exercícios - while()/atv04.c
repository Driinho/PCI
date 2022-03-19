#include <stdio.h>

int main() {

    int n1, div, soma, cont, cont2;

    printf("\nNumero inteiro: ");
    scanf("%i", &n1);

    printf("- Divisivel por: ");

    div = 1;
    soma = 0;
    cont = 0;
    cont2 = 0;

    while(div < n1)
    {
        if(n1 % div == 0)
        {
            if(cont==0)
            {
                printf("%i", div);
            }
            
            if(cont2 < cont)
            {
                printf(" + ");
                printf("%i", div);
            }

            soma = soma + div;
            cont++;
        }

        div++;
    }

    if(soma==n1)
    {
        printf(" = %i [PERFEITO]", soma);
    }
    else if(soma!=n1)
    {
        printf(" = %i  [IMPERFEITO]", soma);
    }

    printf("\n\n");
    return 0;
}