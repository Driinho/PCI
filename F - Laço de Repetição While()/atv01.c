#include <stdio.h>

int main() {

    int num, maior, menor, contador = 1;

    //usando o while
    
    printf("\tNumero: ");
    scanf("%i", &num);
    fflush(stdin);

    if(num < 0){
        printf("\n\tValor Invalido");
    }

    while(num >= 0){

        if(contador == 1){
            maior = num;
            menor = num;
        }
        else{
            if(num > maior){
                maior = num;
            }
            else if(num < menor && num > 0){
                menor = num;
            }
        }
        printf("\tNumero: ");
        scanf("%i", &num);
        fflush(stdin);
        contador++;
    }

    if(contador > 1){
        printf("\n\tMaior Valor = %i", maior);
        printf("\n\tMenor Valor = %i", menor);
    }
    

    //usando o do while
    /*
    do{
        printf("\tNumero: ");
        scanf("%i", &num);
        fflush(stdin);

        if(contador == 1){
            if(num < 0){
                printf("\n\tValor Invalido");
            }
            maior = num;
            menor = num;
        }
        else{
            if(num > maior){
                maior = num;
            }
            else if(num < menor && num > 0){
                menor = num;
            }
        }
        contador++;
    } while(num >= 0);

    if(contador > 2){
    printf("\n\tMaior Valor = %i", maior);
    printf("\n\tMenor Valor = %i", menor);
    }
    */

    printf("\n\n");
    return 0;
}