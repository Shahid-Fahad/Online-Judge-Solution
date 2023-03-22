#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d, t, f, tf;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    t = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    if(t >= 7)
    {
        printf("Media: %.1lf\n", t);
        printf("Aluno aprovado.\n");
    }
    else if(t < 5)
    {
        printf("Media: %.1lf\n", t);
        printf("Aluno reprovado.\n");
    }
    else if(t >= 5.0 && t <= 6.9)
    {
        printf("Media: %.1lf\n", t);
        printf("Aluno em exame.\n");
        scanf("%lf", &f);
        printf("Nota do exame: %.1lf\n", f);
        tf = (t + f) / 2;
            if(tf >= 5.0)
            {
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n", tf);
            }
            else
            {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n", tf);
            }
    }
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}