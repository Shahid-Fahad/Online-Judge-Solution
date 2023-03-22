#include <stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);
    if (a <= 400.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n", (a * .15) + 400.00, (a * .15));
    }
    else if (a >= 400.01 && a <= 800.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n", (a * .12) + 400.01, (a * .12));
    }
    else if (a >= 800.01 && a <= 1200.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n", (a * .10) + 800.01, (a * .10));
    }
    else if (a >= 1200.01 && a <= 2000.00)
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n", (a * .07) + 2000.00, (a * .07));
    }
    else
    {
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n", (a * .04) + 2000.01, (a * .04));
    }
}