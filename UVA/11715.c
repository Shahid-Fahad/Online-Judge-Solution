#include<stdio.h>
#include<math.h>
int main()
{
    double s,v,u,a,t;
    int x,c=1;
    while(1)
    {
        scanf("%d",&x);
        if(x==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
        a = (v-u)/t;
       s = ((u+v)/2.0)*t;

       printf("Case %d: %0.3lf %0.3lf\n",c,s,a);
        }
        else if(x==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
       t = (v-u)/a;
       s = ((u+v)/2.0)*t;
        printf("Case %d: %0.3lf %0.3lf\n",c,s,t);
        }
        else if(x==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
             v = sqrt((u*u)+2*a*s);
             t = (v-u)/a;

              printf("Case %d: %0.3lf %0.3lf\n",c,v,t);

        }
        else if(x==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
             u = sqrt((v*v)-2*a*s);
             t = (v-u)/a;
              printf("Case %d: %0.3lf %0.3lf\n",c,u,t);
        }
      else if(x==0)
        break;

        c++;
    }
    return 0;
}
