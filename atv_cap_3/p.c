#include <stdio.h>

int main(){
    float sm, pr, ns;

    printf("Escreva o valor do salário antigo: ");
    scanf("%f", &sm);

    printf("Escreva o valor do percentual de reajuste: ");
    scanf("%f", &pr);
    
    pr = (pr/100) * sm;
    ns = sm + pr;

    printf("O novo salário é: R$ %.2f", ns);
}