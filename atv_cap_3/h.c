#include <stdio.h>

int main(){
    float C, A, L, V;

    printf("Comprimento: ");
    scanf("%f", &C);
    printf("Altura: ");
    scanf("%f", &A);
    printf("Largura; ");
    scanf("%f", &L);

    V = C * A * L;

    printf("\nO volume é de %.2f metros.\n", V);

}   