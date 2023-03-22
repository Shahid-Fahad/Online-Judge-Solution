#include<stdio.h>
int main()
{
    int ht,mt,h1,m1,h2,m2;
    while(1)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        else
        {
            if(m1<=m2)
                mt = m2-m1;
            else if(m2<m1)
            mt =(60-m1)+m2;

            if(h1>=h2&&m1>=m2)
                ht = (24-h1+h2-1)*60;
            else if(h1>h2&&m1<m2)
                ht = (24-h1+h2)*60;
            else if(h2>=h1 && m1<=m2)
                ht = (h2-h1)*60;
            else if(h2>h1 && m1>m2)
                ht = (h2-h1-1)*60;


        }
        printf("%d\n",ht+mt);
    }
}
