#include <stdio.h>

int main(){
    float T, Vm, D, lu;

    printf("Tempo gasto em horas: ");
    scanf("%f", &T);

    printf("Velocidade média em km/h: ");
    scanf("%f", &Vm);

    D = T * Vm;
    lu = D / 12;

    printf("\nVelocidade média: %.2fkm/h\nTempo gasto: %.2fh\nDistânca: %.2fkm\nLitros usados na viagem: %.2fL", Vm, T, D, lu);

}