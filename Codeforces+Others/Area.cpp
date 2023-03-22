#include <stdio.h>
int main()
{
    double A, B, C, pi = 3.14159, T, Ci, Tr, Sq, Re;
    scanf("%lf %lf %lf", &A, &B, &C);
    T = ((1 / 2.0) * A * C);
    Ci = (pi * C * C);
    Tr = ((1 / 2.0) * C * (A + B));
    Sq = (B * B);
    Re = (A * B);
    printf("TRIANGULO: %.3lf\n", T);
    printf("CIRCULO: %.3lf\n", Ci);
    printf("TRAPEZIO: %.3lf\n", Tr);
    printf("QUADRADO: %.3lf\n", Sq);
    printf("RETANGULO: %.3lf\n", Re);
    return 0;
}