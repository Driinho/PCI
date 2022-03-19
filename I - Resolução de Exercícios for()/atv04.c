#include <stdio.h>

int main() {

    int num, alt, cont, topo, esp, base, flag;

    do{

        printf("\nDigite a altura (impar): ");
        scanf("%i", &num);
        if(num%2==0)
        {
            printf("Numero Invalido.");
        }

    } while(num%2==0);

    printf("\n\t");

    alt = num;

    for(topo = 1; topo<=alt; topo = topo + 2)
    {
        esp = (alt - topo) / 2;

        for(; esp > 0; esp--)
        {
            printf(" ");
        }

        for(cont = 1; cont<=topo; cont++)
        {
            printf("*");
        }
        printf("\n\t");
    }

    topo = 1;
    flag = 1;

    for(alt = num - 2; alt>=topo; alt = alt - 2)
    {
        if(flag == 1)
        {
            base = alt - 1;
            esp = alt - base;
            flag++;
        }

        for(cont = 1; cont<=esp; cont++)
        {
            printf(" ");
        }

        for(cont = 1; cont<=alt; cont++)
        {
            printf("*");
        }

        printf("\n\t");

        esp++;
    }

    printf("\n");
    return 0;
}