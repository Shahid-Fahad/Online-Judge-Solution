#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,r,x=-1;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s = (a+b+c)/2;
        r = 4*sqrt(s*(s-a)*(s-b)*(s-c))/3;
        if(r>0)
       printf("%0.3lf\n",r);
        else
            printf("%0.3lf\n",x);
    }
}
