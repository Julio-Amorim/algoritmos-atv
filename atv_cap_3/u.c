#include <stdio.h>

int main(){
    float R, V;

    printf("Escreva o raio da esfera: ");
    scanf("%f", &R);

    V = (4 / 3) * 3.14159 * ((R * R) * R );

    printf("O valor do volume é de: %.2f", V);
}