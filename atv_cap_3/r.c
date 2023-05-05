#include <stdio.h>

int main(){
    int A, B, C, N, br, total_votos, votos_validos;
    float perce_votos_validos, perce_votos_A, perce_votos_B, perce_votos_C, perce_votos_N, perce_votos_Br;
    printf("\nEscreva os votos válidos do candidado A: ");
    scanf("%d", &A);

    printf("\nEscreva os votos válidos do candidado B: ");
    scanf("%d", &B);

    printf("\nEscreva os votos válidos do candidado C: ");
    scanf("%d", &C);

    printf("\nEscreva a quantidade votos nulos: ");
    scanf("%d", &N);

    printf("\nEscreva a quantidade em branco: ");
    scanf("%d", &br);

    total_votos = A + B + C + N + br;
    votos_validos = A + B + C;
    perce_votos_validos = (votos_validos * 100) / total_votos;
    perce_votos_A = (A * 100) / total_votos;
    perce_votos_B = (B * 100) / total_votos;
    perce_votos_C = (C * 100) / total_votos;
    perce_votos_N = (N * 100) / total_votos;
    perce_votos_Br = (br * 100) / total_votos;

    printf("\nValor total dos votos:              | %d votos\nPercentual de votos válidos:        | %.2f%%\nPercentual de votos do candidato A: | %.2f%%\nPercentual de votos do candidato B: | %.2f%%\nPercentual de votos do candidato C: | %.2f%%\npercentual de votos nulos:          | %.2f%%\nPercentual de votos em brancos:     | %.2f%%\n", total_votos, perce_votos_validos, perce_votos_A, perce_votos_B, perce_votos_C, perce_votos_N, perce_votos_Br);
}