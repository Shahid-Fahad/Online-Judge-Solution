#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j,q,flag;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&q);
        flag=0;
        if(q==1)
        {
            printf("Neither\n");
        }
        else
        {
            for(j=2; j<=sqrt(q); j++)
            {
                if(q%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("Prime\n");
            }
            else if(flag==1)
            {
                printf("Composite\n");
            }
            else
            {
                printf("Niether\n");
            }
        }
    }

    return 0;
}
