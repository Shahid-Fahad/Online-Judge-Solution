#include <stdio.h>
#include <string.h>
int main()
{
    int i, q, j, k, p, l, n;
    char x, c[10010], a[10010], a1[10010], y, a2[10010], b[10][10010];
    scanf("%s", a);
    q = strlen(a);
    //strcpy(c,a);
    if (q <= 2)
    {
        if (a[0] > a[1])
            printf("%s", a);
        else
        {
            y = a[0];
            a[0] = a[1];
            a[1] = y;
            printf("%s\n", a);
        }
    }
    else
    {
        for (i = 0, l = 0; a[i]; i++)
        {
            for (j = i + 1, p = 0; j < q; j++, p++)
            {
                a1[p] = a[j];
            }
            a1[p] = '\0';
            for (j = 0; a1[j]; j++)
            {
                for (k = j + 1; a1[k]; k++)
                {
                    if (a1[j] > a1[k])
                    {
                        x = a1[j];
                        a1[j] = a1[k];
                        a1[k] = x;
                    }
                }
            }
            //strcpy(b[l],a1);
            //l++;
            for (j = i, p = 0; j >= 0; j--, p++)
            {
                a2[p] = a[j];
            }
            a2[p] = '\0';
            for (j = 0; a2[j]; j++)
            {
                for (k = j + 1; a2[k]; k++)
                {
                    if (a2[j] > a2[k])
                    {
                        x = a2[j];
                        a2[j] = a2[k];
                        a2[k] = x;
                    }
                }
            }
            strcat(a2, a1);
            strcpy(b[l], a2);
            l++;
            //printf("%s",a2);
            //break;
        }
        for (i = 0; i < l; i++)
        {
            for (j = i + 1; j < l; j++)
            {
                if (strcmp(b[i], b[j]) > 0)
                {
                    strcpy(c, b[i]);
                    strcpy(b[i], b[j]);
                    strcpy(b[j], c);
                }
            }
        }
        //for(i=0;i<l;i++)
        printf("%s\n", b[0]);
    }
    return 0;
}