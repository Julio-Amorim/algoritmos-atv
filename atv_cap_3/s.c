#include <stdio.h>

int main(){
    int A, B, S, D, P;
    float div;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    S = A + B;
    D = A - B;
    P = A * B;
    div = A / B;

    printf("%d + %d = %d\n%d - %d = %d\n%d x %d = %d\n%d / %d = %.2f\n", A, B, S, A, B, D, A, B, P, A, B, div);

}