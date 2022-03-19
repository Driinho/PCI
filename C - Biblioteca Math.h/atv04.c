#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double raiz1, raiz2;

    printf("Coeficientes (a, b, c): ");
    scanf("%i %i %i", &a, &b, &c);

    raiz1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    raiz2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("- Raizes = %.1lf %.1lf", raiz1, raiz2);
    return 0;
}