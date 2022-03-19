#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2;
    double raiz;

    printf("Digite dois valores inteiros: ");
    scanf("%i %i", &n1, &n2);

    raiz = sqrt(pow(n2, n1));

    printf("- Raiz = %.1lf", raiz);

    return 0;
}