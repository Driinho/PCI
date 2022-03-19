#include <stdio.h>

int main() {

    float nd1, nd2, nd3;

    printf("Digite os tres tempos: ");
    scanf("%f %f %f", &nd1, &nd2, &nd3);

    //analisa qual e o primeiro lugar
    if(nd1<nd2 && nd1<nd3) {
        printf("- 1 lugar > %.2f", nd1);
    }
        else if(nd2<nd1 && nd2<nd3) {
            printf("- 1 lugar > %.2f", nd2);
        }
        else if(nd3<nd1 && nd3<nd2) {
            printf("- 1 lugar > %.2f", nd3);
        }
    //analisa qual e o segundo lugar
    if(nd1<nd2 && nd1>nd3 || nd1>nd2 && nd1<nd3) {
        printf("\n- 2 lugar > %.2f", nd1);
    }
        else if(nd2<nd1 && nd2>nd3 || nd2>nd1 && nd2<nd3) {
            printf("\n- 2 lugar > %.2f", nd2);
        }
        else if(nd3<nd1 && nd3>nd2 || nd3>nd1 && nd3<nd2) {
            printf("\n- 2 lugar > %.2f", nd3);
        }
    //analise qual e o terceiro lugar
    if(nd1>nd2 && nd1>nd3) {
        printf("\n- 3 lugar > %.2f", nd1);
    }
        else if(nd2>nd1 && nd2>nd3) {
            printf("\n- 3 lugar > %.2f", nd2);
        }  
        else if(nd3>nd1 && nd3>nd2) {
            printf("\n- 3 lugar > %.2f", nd3);
        }

    return 0;
}