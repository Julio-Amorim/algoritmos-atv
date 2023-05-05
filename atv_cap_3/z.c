#include <stdio.h>

int main(){
    int A, B, D, Q;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    D = A / B;
    Q = D * D;

    printf("\nO quadrado da divisão do valor de %d em relação ao valor d %d é igual a %d\n\n", A, B, Q);

}