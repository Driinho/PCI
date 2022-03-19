#include <stdio.h>
#include <math.h>

int main() {

    int n1, n2, n3;

    printf("Digite tres numeros: ");
    scanf("%i %i %i", &n1, &n2, &n3);

    if(n1>n2&&n1>n3) {
        printf("- Maior: %i", n1);
    }
    else if(n2>n1&&n2>n3) {
        printf("- Maior: %i", n2);
    }
    else if(n3>n1&&n3>n2) {
        printf("- Maior: %i", n3);
    }

    if(n1<n2&&n1<n3) {
        printf("\n- Menor: %i", n1);
    }
    else if(n2<n1&&n2<n3) {
        printf("\n- Menor: %i", n2);
    }
    else if(n3<n1&&n3<n2) {
        printf("\n- Menor: %i", n3);
    }

    return 0;
}