#include <stdio.h>

int main() {

    char conteudo[100], busca[100];
    int cont_1 = 0, cont_2 = 0, bus, conte, conte_aux;

    printf("String conteudo: ");
    gets(conteudo);
    fflush(stdin);
    printf("String busca: ");
    gets(busca);
    fflush(stdin);

    for(cont_1 = 0; busca[cont_1] != '\0'; cont_1++) { }

    for(conte = 0, bus = 0; conteudo[conte] != '\0'; conte++)
    {
        if(conteudo[conte] == busca[bus])
        {
            conte_aux = conte;

            for(bus = 0; conteudo[conte_aux] == busca[bus] && busca[bus] != '\0'; bus++, conte_aux++)
            {
                cont_2++;
            }
            if(cont_1 > cont_2)
            {
                cont_2 = 0;
                bus = 0;
            }
        }
    }

    if(cont_1 == cont_2)
    {
        printf("- Achou!");
    }
    else
    {
        printf("- Nao achou!");
    }

    printf("\n\n");
    return 0;
}