#include <stdio.h>

int main(){
    float dolar, cotacao, real;

    printf("Valor da cotação atual do dólar: ");
    scanf("%f", &cotacao);

    printf("Quantidade de Dolares que deseja converter para Real: ");
    scanf("%f", &dolar);

    real = dolar * cotacao;

    printf("Convertendo USD %.2f com a cotação de R$ %.2f\nResultado: R$ %.2f\n", dolar, cotacao, real);

}