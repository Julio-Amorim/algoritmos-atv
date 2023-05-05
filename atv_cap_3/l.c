#include <stdio.h>

int main(){
    float dolar, cotacao, real;

    printf("Valor da cotação atual do Real: ");
    scanf("%f", &cotacao);

    printf("Quantidade de Reais que deseja converter para Dólar: ");
    scanf("%f", &real);

    dolar = real * cotacao;

    printf("Convertendo R$ %.2f com a cotação de UDS %.2f\nResultado: USD %.2f\n", real, cotacao, dolar);

}