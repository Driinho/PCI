#include <stdio.h>

int main() {

    int num, cont, fat = 1;

    printf("Digite um valor inteiro: ");
    scanf("%i", &num);

    printf("- Fatorial(%i) = ", num);

    for(;num>=2; num--)
    {
        fat = fat * num;

        if(num>2)
        {
            printf("%i x ", num);
        }
        else
        {
            printf("%i", num);
        }
    }

    printf(" = %i", fat);

    printf("\n\n");
    return 0;
}