#include <stdio.h>

int main() {

    char x, y, z; 

    printf("Digite tres letras: ");
    scanf("%c %c %c", &x, &y, &z);


    printf("- Combinacao 1 = %c %c %c", x, y, z);
    printf("\n- Combinacao 2 = %c %c %c", x, z, y);
    printf("\n- Combinacao 3 = %c %c %c", y, x, z);
    printf("\n- Combinacao 4 = %c %c %c", y, z, x);
    printf("\n- Combinacao 5 = %c %c %c", z, y, x);
    printf("\n- Combinacao 6 = %c %c %c", z, x, y);

    return 0;
}