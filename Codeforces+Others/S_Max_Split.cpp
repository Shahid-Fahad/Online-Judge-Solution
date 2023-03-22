#include <stdio.h>
#include <string.h>
int main()
{
    char s[1010], S, S1, S11;
    int c = 0, C = 0, p = 0, i, j, x, X, y, Y, f = 0;
    scanf("%s", s);
    int L = strlen(s);
    for (i = 0; i < L; i++)
    {
        if (s[i] == 'R')
            c++;
        ///if(s[i+1] == 'L')
        ///C = 0;}
        else
            C++;
        ///if(s[i+1] == 'R')
        ///c = 0;}
        if (c == C && c > 0)
        {
            f = 1;
            c = 0;
            C = 0;
        }
        if (f == 1)
        {
            p++;
            f = 0;
        }
    }
    printf("%d\n", p);
    C = 0, c = 0, f = 0;
    int last_started=0;
    for (i = 0; i < L; i++)
    {
        if (s[i] == 'R')
        {
            c++;
        }
        else
        {
            ///S1 = s[i];
            C++;
        }
        ///if(s[i] != S){
        ///if(s[i+1] == S || i == L-1){
        if (c == C)
        {
            for(j=last_started;j<=i;j++)
            printf("%c",s[j]);
            printf("\n"); 
            last_started=i+1;
        }
        // if (f == 1)
        // {
        //     if (x < y)
        //     {
        //         for (j = X; j <= x; j++)
        //             printf("R");
        //         for (j = Y; j <= y; j++)
        //             printf("L");
        //     }
        //     else if (y < x)
        //     {
        //         for (j = Y; j <= y; j++)
        //             printf("L");
        //         for (j = X; j <= x; j++)
        //             printf("R");
        //     }
        //     printf("\n");
        //     x = 0, y = 0, f = 0;
        // }
    }
    return 0;
}