#include <stdio.h>

int main(){
    int A, B, C, R;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    printf("Escreva o valor de C: ");
    scanf("%d", &C);

    R = (A * A) + (B * B) + (C * C);

    printf("O resultado do da soma dos quadrados dos três valores é: %d", R);
}