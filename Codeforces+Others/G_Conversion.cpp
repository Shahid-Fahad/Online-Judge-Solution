#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000000], a, f;
    int i;
    gets(s1);
    //scanf("%s%c", s1, &a);
    for(i=0;s1[i];i++)
    {
        if(s1[i]==',')
        printf(" ");
        else if(s1[i]>=65 && s1[i]<=90)
        {
            f=s1[i]+32;
            printf("%c", f);
        }
        //printf("%c ", f);
        else
        {
            f=s1[i]-32;
            printf("%c", f);
        }
        //printf("%c ", f);
    }
    return 0;

}