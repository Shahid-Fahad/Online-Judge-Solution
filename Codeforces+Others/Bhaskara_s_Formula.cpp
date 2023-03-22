#include <stdio.h>
#include <math.h>
int main()
{
    double A, B, C, R1, R2, X;
    scanf("%lf%lf%lf", &A, &B, &C);
    R1 = (-B + (sqrt(B * B - 4 * A * C))) / (2 * A);
    R2 = (-B - (sqrt(B * B - 4 * A * C))) / (2 * A);
    X = (B * B - (4 * A * C));
    if (X < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        //R1 = (-B+(sqrt(B*B-4*A*C)))/(2*A) ;
        //R2 = (-B-(sqrt(B*B-4*A*C)))/(2*A) ;

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}