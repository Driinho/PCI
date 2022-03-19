#include <stdio.h>

int main() {

    int d1, d2;

    printf("Digite os dois dias: ");
    scanf("%i %i", &d1, &d2);

    if(d1==1){
        printf("[Domingo, ");
    }
    else if(d1==2){
        printf("[Segunda, ");
    }
    else if(d1==3){
        printf("[Terca, ");
    }
    else if(d1==4){
        printf("[Quarta, ");
    }
    else if(d1==5){
        printf("[Quinta, ");
    }
    else if(d1==6){
        printf("[Sexta, ");
    }
    else if(d1==7){
        printf("[Sabado, ");
    }
    else if(d1<0 || d1>7){
        printf("[Invalido, ");
    }

    if(d2==1){
        printf("Domingo]");
    }
    else if(d2==2){
        printf("Segunda]");
    }
    else if(d2==3){
        printf("Terca]");
    }
    else if(d2==4){
        printf("Quarta]");
    }
    else if(d2==5){
        printf("Quinta]");
    }
    else if(d2==6){
        printf("Sexta]");
    }
    else if(d2==7){
        printf("Sabado]");
    }
    else if(d2<1 || d2>7){
        printf("Invalido]");
    }

    return 0;
}