#include <stdio.h>

int main() {

    int n1, n2, cont, div, soma, flag = 0;

    printf("Digite dois numeros: ");
    scanf("%i %i", &n1, &n2);

    for(cont = n1 + 1; cont<n2; cont++)
    {
        soma = 0;

        for(div = 1; div<cont; div++)
        {
            if(cont % div == 0)
            {
                soma = soma + div;
            }
        }
        if(soma == cont)
        {
            flag++;

            if(flag == 1)
            {
                printf("- Numeros perfeitos entre(%i) e (%i): ", n1, n2);
            }
            printf("%i ", div);
        }
    }
    if(flag == 0)
    {
        printf("\n- Nenhum numero perfeito entre (%i) e (%i) !!!", n1, n2);
    }

    printf("\n\n");
    return 0;
}