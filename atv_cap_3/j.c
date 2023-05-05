#include <stdio.h>

int main(){
    int A, B, R;

    printf("Escreva o valor de A: ");
    scanf("%d", &A);

    printf("Escreva o valor de B: ");
    scanf("%d", &B);

    R = (A - B) * (A - B);

    printf("O valor do quadrado da diferença dos número é de %d", R);
}