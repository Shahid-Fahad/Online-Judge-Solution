#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,q,r;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        p = pow(a,2);
        q = pow(b,2);
        r = pow(c,2);
        if(a==0&&b==0&&c==0)
            break;
        else if((p+q==r)||(p+r==q)||(r+q==p))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
