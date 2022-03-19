#include <stdio.h>

int main() {

    int x, n1, n2, n3, soma;

    printf("\nDigite um numero (3 digitos): ");
    scanf("%i", &x);

    n1 = x / 100;
    n2 = (x % 100) / 10;
    n3 = x % 10;

    soma = n1 + n2 + n3;

    printf("\n- Soma = %i + %i + %i = %i", n1, n2, n3, soma);

    return 0;
}