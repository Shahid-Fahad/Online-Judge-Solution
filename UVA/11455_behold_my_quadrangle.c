#include<stdio.h>
int main()
{
long long int a,b,c,d;
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);

        if(a+b+c<=d||a+b+d<=c||a+c+d<=b||b+c+d<=a||(a==0&&b==0&&c==0&&d==0))
            printf("banana\n");
           else if(a==b&&a==c&&a==d&&b==c&&b==d&&c==d)
        printf("square\n");
        else if(((a==c)&&(b==d))||((a==b)&&(c==d))||((a==d)&&(b==c)))
            printf("rectangle\n");
        else
            printf("quadrangle\n");
}
return 0;
}
