#include <stdio.h>

int main() {

    char l1, l2;

    printf("Digite dois caracteres: ");
    scanf("%c %c", &l1, &l2);
    fflush(stdin);


    if(l1>=97 && l1<=122){
        l1 = l1 - 32;
    }
    if(l2>=97 && l2<=122){
        l2 = l2 - 32;
    }

    printf("-");

    while(l1<=l2){
        printf(" %c ", l1);
        l1++;
    }
    
    return 0;
}