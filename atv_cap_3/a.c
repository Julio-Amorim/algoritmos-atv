#include <stdio.h>

int main(){
    float c;
    float f;

    printf("Escreva o valor da temperatura em Celsius: ");
    scanf("%f" ,&c);

    f = c * 9/5 + 32;

    printf("\nA temperatura %.2f Celsius em Fahrenheit, é %.2f F°.", c, f);
}