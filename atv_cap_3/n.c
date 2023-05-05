#include <stdio.h>

int main(){
    int A, B, C, R;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    printf("Escreva o valor de C: ");
    scanf("%d", &C);    

    R = (A + B + C) * (A + B + C);

    printf("\nO resultado do quadrado da soma dos três valores é de: %d\n", R);
}