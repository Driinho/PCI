#include <stdio.h>
#include <time.h>

int main() {

    char letras[10], palavra[10];
    int n, n1, cont = 0, cont2 = 0, flag = 0;

    srand(time(NULL));

    printf("Valor aleatorio: ");

    for(n = 0; n < 10; n++)
    {
        if(rand() % 2 == 0)
        {
            letras[n] = 65 + rand() % 25;
        }
        else
        {
            letras[n] = 97 + rand() % 25;
        }
    }

    for(n = 0; n < 10; n++)
    {
        for(n1 = 0; n1 < 10; n1++)
        {
            if((letras[n] == letras[n1] || letras[n] == letras[n1] + 32 || letras[n] == letras[n1] - 32) && n1 != n)
            {
                if(rand() % 2 == 0)
                {
                    letras[n] = 65 + rand() % 25;
                }
                else
                {
                    letras[n] = 97 + rand() % 25;
                }
            }
        }
    }

    for(n = 0; n < 10; n++)
    {
        for(n1 = 0; n1 < 10; n1++)
        {
            if((letras[n] == letras[n1] || letras[n] == letras[n1] + 32 || letras[n] == letras[n1] - 32) && n1 != n)
            {
                if(rand() % 2 == 0)
                {
                    letras[n] = 65 + rand() % 25;
                }
                else
                {
                    letras[n] = 97 + rand() % 25;
                }
            }
        }
    }

    for(n = 0; n < 10; n++)
    {
        printf("%c ", letras[n]);
    }

    printf("\nPalavra: ");
    gets(palavra);

    for(n = 0; n < 10; n++)
    {
        for(n1 = 0; palavra[n1] != '\0'; n1++)
        {
            if(letras[n] == palavra[n1])
            {
                cont++;
                letras[n] = 0;
            }
            if(flag == 0)
            {
                cont2++;
            }
        }
        flag = 1;
    }

    if(cont == cont2)
    {
        printf("- [E possivel]");
    }
    else
    {
        printf("\n- [Nao e possivel]");
    }

    printf("\n\n");
    return 0;
}