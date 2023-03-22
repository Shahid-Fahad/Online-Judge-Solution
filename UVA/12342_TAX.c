#include<stdio.h>
#include<math.h>
int main()
{
   int i,t;
    double tax,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&s);
        tax =0;
        if(s<=180000&&s>0)
            tax = 0;
        else if(s>180000 && s<=480000)
            tax = (s-180000) * 0.10;
        else if(s>480000 && s<=880000)
            tax = (300000*0.10) + (s-480000)*0.15;
        else if(s>880000 && s<=1180000)
            tax = (300000*0.10) + (400000*0.15) + (s-880000)*0.20;
        else if(s>1180000)
            tax = (300000*0.10) + (400000*0.15) + (300000*0.20) + (s-1180000)*0.25;



        tax=ceil(tax);
        if(tax>0 && tax<=2000)
        printf("Case %d: 2000\n",i);
        else if(tax>2000)
            printf("Case %d: %.0lf\n",i,tax);
        else printf("Case %d: 0\n",i);
    }

    return 0;
}
