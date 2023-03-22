#include<stdio.h>
int main()
{
    int m, n, i, sum, j, sum1;
    while(1)
    {
        scanf("%d%d", &m, &n);
        if(m<=0 || n<=0)
        {
            break;
        }
        if(m>=n)
        {
            sum=0;
            for(i=n; i<=m; i++)
            {
                sum+=i;
                printf("%d ", i);
            }
            printf("sum =%d\n", sum);
        }
        if(m<n)
        {
            sum1=0;
            for(j=m; j<=n; j++)
            {
                sum1+=j;
                printf("%d ", j);
            }
            printf("sum =%d\n", sum1);
        }
    }
    return 0;
}