#include <stdio.h>

int main(){
    int A, su, an;

    printf("Escreva um número: ");
    scanf("%d", &A);

    su = A + 1;
    an = A - 1;

    printf("\nO número sucessor de %d é %d\n\nO número antecessor de %d é %d\n", A, su, A, an);

}