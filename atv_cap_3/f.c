#include <stdio.h>

int main(){
    int A, B, C;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    C = A;
    A = B;
    B = C;

    printf("\nO valor de A é %d\nO valor de B é %d\n", A, B);
};