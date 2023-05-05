#include <stdio.h>

int main(){
    float V, D, T;

    printf("Escreva o valor da distância: ");
    scanf("%f", &D);

    printf("Escreva o valor do tempo: ");
    scanf("%f", &T);

    V = (D * 1000) / (T * 60);

    printf("A velocidade é de: %.2f", V);
}