#include <stdio.h>

int main(){
    float c;
    float f;

    printf("Escreva o valor da temperatura em Fahrenheit: ");
    scanf("%f" ,&f);

    c = ((f - 32) * 5) / 9;

    printf("\nA temperatura %.2f Fahrenheit em Celsius, é %.2f C°.", f, c);
}