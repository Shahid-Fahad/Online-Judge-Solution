#include<stdio.h>
void num(int n)
{
    long long int f=0,rem, i=1,y=0,x,c;
    char bin[60],bin2[60];
    if(n%2==0)
    {
        printf("NO\n");
    }
    else
    {
        int ind=0;
        while(n>0)
        {
            rem=n%2;
            bin[ind]=rem;
            ind++;
            i*=10;
            n/=2;
        }
       
        for(int i=0,j=ind-1;i<ind/2;i++,j--)
        {
            if(bin[i]!=bin[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    num(n);
    return 0;
}