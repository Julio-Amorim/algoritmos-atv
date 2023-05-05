#include <stdio.h>

int main(){
    int A, B, C, D, P, S;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);
    
    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    printf("Escreva o valor de C: ");
    scanf("%d", &C);

    printf("Escreva o valor de D: ");
    scanf("%d", &D);

    P = A * C;
    S = B + D;
    
    printf("%d x %d = %d\n%d + %d = %d\n", A, C, P, B, D, S);
}
