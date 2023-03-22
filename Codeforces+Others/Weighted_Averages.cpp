#include<stdio.h>
int main()
{
     int n;
     double i, x, a, b , c, avg;
     scanf("%d", &n);
     i = 1;
     while(i <= n)
     {
         scanf("%lf%lf%lf", &a, &b, &c);
         avg = ((a*2.0)+(b*3.0)+(c*5.0))/10.0;

         printf("%0.1lf\n", avg);
         i++;
     }


return 0;
}