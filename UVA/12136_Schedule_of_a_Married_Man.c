#include<stdio.h>
int main()
{
    int wh1,wm1,wh2,wm2,fh1,fh2,fm1,fm2,n,i,r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d:%d %d:%d",&wh1,&wm1,&wh2,&wm2);
        scanf("%d:%d %d:%d",&fh1,&fm1,&fh2,&fm2);
        if(wh2>wh1)
        {
            if(fh1>wh1&&fh1<wh2)
                r=1;
            else if((fh1==wh1&&fm1<=wm1)||(fh1==wh2&&fm1<=wm2))
                r=1;
            else
                r=0;
        }
        else if(wh1>wh2)
        {
            if(fh1<wh2&&fh1<wh1)
                r=1;
            else if((fh1==wh1&&fm1<=wm1)||(fh1==wh2&&fm1<=wm2))
                r=1;
            else
                r=0;
        }
        else if(wh1==wh2&&wh2==fh1)
        {
            if((wm1>wm2)&&(fm1>=wm2&&fm1<=wm1))
                r=1;
            else if((wm2>wm1)&&(fm1>=wm1&&fm1<=wm2))
                r=1;
            else
                r=0;
        }
    if(r==0)
        printf("Case %d: Hits Meeting\n",i);
    else
        printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
