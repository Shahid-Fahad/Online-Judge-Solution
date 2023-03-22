#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,f=0,sum=0;
    char s[100];
    while (scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%s",&s);
            if (strcmp(s,"donate")==0)
            {
                scanf("%d",&f);
            sum+=f;
            }
            else
            {
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
