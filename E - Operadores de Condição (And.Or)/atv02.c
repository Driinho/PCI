#include <stdio.h>

int main() {

    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    //analisa se é criança(até 11 anos)
    if(idade<=11 && idade>=1) {
        printf("- Crianca");
    }
        //anaisa se é adolescente (de 12 a 17 anos)
        else if(idade>=12 && idade<=17) {
            printf("- Adolescente");
        }
        //analisa se é adulto (de 18 a 59 anos)
        else if(idade>=18 && idade<=59) {
            printf("- Adulto");
        }
        //analisa se é idoso (de 60 anos pra cima)
        else if(idade>=60) {
            printf("- Idoso");
        }
    //caso nao seja uma idade válida
    else {
        printf("- Idade Invalida");
    }

    return 0;
}