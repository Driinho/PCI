#include <stdio.h>

int main() {

    int n1, n2, contador = 0;

    printf("Digite um numero: ");
    scanf("%i", &n1);
    fflush(stdin);

    n2 = n1 - 1;

    while(n2 > 1 && n2 < n1){
        if(n1 % n2 == 0){
            contador++;
        }
        
        n2--;
    }

    if(contador == 0){
        printf("[PRIMO]");
    }
    if(contador > 0){
        printf("[NAO PRIMO]");
    }

    printf("\n\n");
    return 0;
}