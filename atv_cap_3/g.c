#include <stdio.h>

int main(){
    int A, B, C, D, A1, A2, A3, A4, A5, A6, A7, A8, A9, B1, B2, B3;

    printf("Escreva o valos da letra A: ");
    scanf("%d", &A);

    printf("Escreva o valos da letra B: ");
    scanf("%d", &B);

    printf("Escreva o valos da letra C: ");
    scanf("%d", &C);

    printf("Escreva o valos da letra D: ");
    scanf("%d", &D);

    A1 = A * B;
    A2 = A * C;
    A3 = A * D;
    A4 = C * B;
    A5 = C * D;
    A6 = D * B;
    A7 = A + B;
    A8 = A + C;
    A9 = A + D;
    B1 = C + B;
	B2 = C + D;
	B3 = C + B;

    printf("A x B = %d\nA x C = %d\nA x D = %d\nC x B = %d\nC x D = %d\nD x B = %d\nA + B = %d\nA + C = %d\nA + D = %d\nC + B = %d\nC + D = %d\nD + B = %d\n", A1, A2, A3, A4, A5, A6, A7, A8, A9, B1, B2, B3);

}