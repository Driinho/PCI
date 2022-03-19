#include <stdio.h>

int main() {

    char frase[50], letra, letra_mai;
    int n, cont = 0;

    printf("Digite a frase: ");
    fflush(stdin);
    gets(frase);
    printf("Digite o caractere: ");
    scanf("%c", &letra);
    
    for(n = 0; frase[n] != '\0'; n++)
    {
        //transforma todas as letras em minuscula
        if(frase[n] < 91 && frase[n] > 64)
        {
            frase[n] = frase[n] + 32;
        }
        //compara as letras da frase com a letra q o usuario digitou
        if(frase[n] == letra || frase[n] == letra_mai)
        {
            cont++;
        }
    }

    printf("- O caractere (%c) foi encontrado (%i) vez(es)", letra, cont);
    
    printf("\n\n");
    return 0;
}