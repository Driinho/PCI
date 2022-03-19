#include <stdio.h>

int main() {

    int t;
    int l1, l2, l3;

    printf("Lados do triangulo: ");
    scanf("%i", &t);

    l1 = t / 100;
    l2 = (t % 100) / 10;
    l3 = t % 10;

    //analisa se o triangulo é equilatero(tres lador iguais)
    if(l1==l2 && l1==l3) {
        printf("- Equilatero");
    }
    //analisa se o triangulo é isosceles(dois lados iguais)
    else if(l1==l2 && l1!=l3 || l1!=l2 && l1==l3 || l2!=l1 && l2==l3) {
        printf("- Isosceles");
    }
    //analisa se o triangulo é escaleno(tres lados diferentes)
    else if(l1!=l2 && l1!=l3 && l2!=l3) {
        printf("- Escaleno");
    }

    return 0;
}