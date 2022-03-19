#include <stdio.h>
#include <math.h>

int main () {

    int n1, n2;
    double potencia;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &n1, &n2);

    potencia = pow(n1, n2);

    printf("- Potencia = %.1lf", potencia);

    return 0;
}