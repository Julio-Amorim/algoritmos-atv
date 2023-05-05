#include <stdio.h>
#include <math.h>

int main(){
    float raiz, A, B;

    printf("Escreva o valor da base: ");
    scanf("%f", &A);

    printf("Escreva o valor do indíce: ");
    scanf("%f", &B);

    raiz = pow(A, (1/B));

    printf("A raiz é: %.2f", raiz);
}