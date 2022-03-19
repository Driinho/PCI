#include <stdio.h>

int main() {

    int num;

    do {
        printf("\n1 - Saque");
        printf("\n2 - Deposito");
        printf("\n3 - Transferencia");
        printf("\n4 - Extrato");
        printf("\n5 - Sair");
        printf("\n> ");
        scanf("%i", &num);

        if(num<0 || num >5){
            printf("Numero Invalido, Digite Novamente");
        }
        if(num==1){
            printf("[SAQUE]\n");
        }
        else if(num==2){
            printf("[DEPOSITO]\n");
        }
        else if(num==3){
            printf("[TRANFERENCIA]\n");
        }
        else if(num==4){
            printf("[EXTRATO]\n");
        }
        else if(num==5){
            printf("[SAIR]");
        }

    } while(num!=5);

    printf("\n\n");
    return 0;
}