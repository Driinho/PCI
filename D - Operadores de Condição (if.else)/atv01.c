#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero<0) {
        printf("- Negativo");
    }

    else if(numero>0) {
        printf("- Positivo");
    }

    else if (numero==0) {
        printf("- Neutro");
    }

    return 0;
}