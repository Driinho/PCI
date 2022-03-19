#include <stdio.h>

int main() {

    float nota;

    printf("Digite a nota media: ");
    scanf("%f", &nota);

    if(nota>=6.0) {
        printf("- Aprovado");
    }
    else if(nota<4.0) {
        printf("- Reprovado");
    }
    else if(nota<6.0&&nota>=4.0) {
        printf("- Recuperacao");
    }

    return 0;
}