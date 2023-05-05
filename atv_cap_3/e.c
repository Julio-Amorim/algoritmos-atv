#include <stdio.h>

int main(){
    int tempo;
    float v, taxa, prestacao;
    printf("Escreva o valor: ");
    scanf("%f", &v);
    printf("Escreva o valor da tempo: ");
    scanf("%d", &tempo);
    printf("Escreva o valos da taxa: ");
    scanf("%f" ,&taxa);

    prestacao = v + (v* (taxa/100) * tempo);

    printf("\nO valor da prestação é de R$ %.2f.\n", prestacao);
}