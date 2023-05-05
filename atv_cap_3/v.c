#include <stdio.h>
#include <math.h>

int main(){
    int A, B, R;

    printf("Escreva o valor da base: ");
    scanf("%d", &A);
    printf("Escreva o valor do expoente: ");
    scanf("%d", &B);

    R = pow(A, B);

    printf("O valor do de %dˆ%d é %d", A, B, R);
}