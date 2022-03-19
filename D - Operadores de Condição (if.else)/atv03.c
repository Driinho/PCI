#include <stdio.h>

int main(){

    int n1;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    if (n1%2==0){
        printf("- PAR");
    }
    else if(n1%2!=0) {
        printf("- IMPAR");
    }

    return 0;
}