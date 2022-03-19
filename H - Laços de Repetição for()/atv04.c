#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6, n7, cont;

    do{   
        printf("\nDigite 7 numeros: ");
        scanf("%i %i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6, &n7);

        if((n1>100||n1<1) || (n2>100||n2<1) || (n3>100||n3<1) || (n4>100||n4<1) || (n5>100||n5<1) || (n6>100||n6<1) || (n7>100||n7<1))
        {
            printf("\nAlgun numero invalido.");
        } 

    } while((n1>100||n1<1) || (n2>100||n2<1) || (n3>100||n3<1) || (n4>100||n4<1) || (n5>100||n5<1) || (n6>100||n6<1) || (n7>100||n7<1));

    printf("- Ordem crescente: ");

    for(cont = 1; cont<=n1||cont<=2||cont<=n3||cont<=n4||cont<=n5||cont<=n6||cont<=n7; cont++)
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
        if(cont==n7)
        {
            printf("%i ", n7);
        }
    }

    printf("\n\n");
    return 0;
}