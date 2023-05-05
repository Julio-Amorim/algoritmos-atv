#include <stdio.h>

int main(){
    float A, R;

    printf("Escreva o valor do raio da circunferência: ");
    scanf("%f", &R);

    A = 3.14159265 * (R * R);

    printf("O valor da área é de %.2f metros", A);
}