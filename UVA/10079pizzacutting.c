#include<stdio.h>
int main()
{
    long long int n,i,fd=1;
    while(1)
    {
        scanf("%lld",&n);
        if(n<0)
            break;
        else
        {

               for(i=0,fd;i<n;i++)
               {
                   fd = fd+i;
               }
                printf("%lld\n",n+fd);
                fd=1;
        }
    }
    return 0;
}
