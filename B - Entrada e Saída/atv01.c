#include <stdio.h>

int main() {

    int n, quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%i", &n);

    quadrado = n*n;
    cubo = n * n * n;

    printf("- Quadrado = %i", quadrado);
    printf("\n- Cubo = %i", cubo);

    return 0;
}