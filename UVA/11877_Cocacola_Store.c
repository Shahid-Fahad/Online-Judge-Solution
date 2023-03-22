#include<stdio.h>
int main()
{
    int eb,i;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&eb);
        if(eb==0)
            break;
        else
            printf("%d\n",eb/2);
    }
    return 0;
}
