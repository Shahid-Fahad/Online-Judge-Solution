#include<stdio.h>
int main()
{
    int l,i,t;
    double r,w,red,green;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&l);
        if(l>0)
        {w = l*(6/10.0);
        r = l/5.0;
        red = acos(-1)*(r*r);
        green = (l*w)-red;
        printf("%.2lf %.2lf\n",red,green);}
    }
    return 0;

}
