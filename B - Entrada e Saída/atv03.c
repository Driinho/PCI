#include <stdio.h>

int main() {

    float media, tanque, distancia;

    printf("Media de consumo (km/l): ");
    scanf("%f", &media);
    printf("Gasolina no tanque (l): ");
    scanf("%f", &tanque);

    distancia = media*tanque;

    printf("- Distancia percorrida = %.1f Km", distancia);
    
    return 0;
}