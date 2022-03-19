#include <stdio.h>

int main() {

    int a, b, c, d;

    a = 5;
    d = 10;
    b = (a*2) + (d*d);
    c = (d*d) / b;

    printf("> Valor de (a) = %i", a);
    printf("\n> Valor de (b) = %i", b);
    printf("\n> Valor de (c) = %i", c);
    printf("\n> Valor de (d) = %i", d);

    return 0;
}