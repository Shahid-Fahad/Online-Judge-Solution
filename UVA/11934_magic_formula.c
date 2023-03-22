#include<stdio.h>
int main()
{
    int a,b,c,d,l,x[1000],count=0,i;
    while(1)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&l);
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        else
        {

            for(i=0; i<=l; i++)
            {
                x[i] = a*(i*i) + b*i + c;
            }
            for(i=0; i<=l; i++)
            {
                if(x[i]%d==0)
                    count++;
            }
            printf("%d\n",count);
            count = 0;
        }
    }

}
