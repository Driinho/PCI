#include <stdio.h>

int main() {

    int n1, n2, soma, cont;

    do{
        printf("\nDigite dois numeros inteiros: ");
        scanf("%i %i", &n1, &n2);

        if(n1 >= n2)
        {
            printf("\nNumero Invalido, Digite o primeiro numero menor que o segundo.");
            printf("\n");
        }

    } while(n1 >= n2);

    for(cont = n1; cont <= n2; cont++)
    {
        if(con t== n1)
        {
            soma = n1;
            printf("%i = %i", n1, cont);
            cont++;
        }
        
        printf("\n");
        printf("%i ", soma);

        soma = soma + cont;

        printf("+ %i = %i", cont, soma);
    }

    printf("\n\n");
    return 0;
}