#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n+5];
    scanf("%s",&str);
    int ans=1;
    char pr=str[0];
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]!=pr)
        {
            ans++;
            pr = str[i];
        }
    }
    printf("%d\n",ans);

}