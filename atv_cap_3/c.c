#include <stdio.h>

int main(){
    float R, A, V;

    printf("Escreva o valor do Raio: ");
    scanf("%f" ,&R);
    printf("Escreva o valor da Altura: ");
    scanf("%f" ,&A);

    V = 4.14159 * (R * R) * A;

    printf("\nO valor do volume é de %.2f\n", V);
}