#include <stdio.h>

int main(){
    float A, M;

    printf("Escreva o valor da medida em pés: ");
    scanf("%f", &A);

    M = A / 3.2808;

    printf("%.2f pés é igual a %.2f metros.", A, M);
}