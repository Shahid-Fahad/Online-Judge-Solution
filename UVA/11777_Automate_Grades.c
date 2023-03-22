#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,t,i;
    double avc,result;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
        if(e<f&&e<g)
            avc = (f+g)/2.0;
        else if(f<e&&f<g)
            avc = (e+g)/2.0;
            else if(g<f&&g<e)
            avc = (f+e)/2.0;
        else
            avc = (e+f+g)/3.0;

        result = a+b+c+d+avc;
        if(result>=0&&result<=100)
        {
            if(result>=90)
            printf("Case %d: A\n",i);
        else if(result>=80&&result<90)
            printf("Case %d: B\n",i);
        else if(result>=70 && result<80)
                printf("Case %d: C\n",i);
        else if(result>=60&&result<70)
        printf("Case %d: D\n",i);
        else if(result<60)
        printf("Case %d: F\n",i);

        }

    }
    return 0;
}
