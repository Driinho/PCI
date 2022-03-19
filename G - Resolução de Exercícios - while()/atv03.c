#include <stdio.h>

int main() {

    int base, topo, cont1, cont2, cont3, topo1, espaco;

    do
    {
        printf("\nBase e Topo: ");
        scanf("%i %i", &base, &topo);

        printf("\n");

        if(base==topo)
        {
            printf("[Numero Invalido, Tente Novamente]");
            printf("\n\n");
        }
    } while (base==topo);

    //topo menor que a base;
    if(topo < base)
    {
        while(topo<=base)
        {
            cont2 = base - topo;
        
            while(cont2 > 0)
            {
                printf(" ");
                cont2--;
            }

            cont1 = 1;
            while(cont1 <= topo)
            {
                printf("* ");
                cont1++;
            }

            printf("\n");
            topo++;
        }
    }

    //base menor que o topo;
    else if(base < topo)
    {
        cont3 = 1;
        while(base <= topo)
        {
            cont1 = 1;
            while(cont1 <= topo)
            {
                printf("* ");
                cont1++;
            }

            printf("\n");
            topo--;

            cont2 = 1;
            
                if(cont3==1)
                {
                    topo1 = topo - 1;
                    espaco = topo - topo1;
                }
            
            while(cont2 <= espaco)
            {
                printf(" ");
                cont2++;
            }

            espaco++;
            cont3++;
        }
    }

    printf("\n\n");
    return 0;
}