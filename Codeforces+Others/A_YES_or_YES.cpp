#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p = 0, j;
    char s[90000100], t;
    scanf("%d ", &n);
    for (i = 0; i < n; i++)
        scanf("%c", &s[i]);
    s[i] = '\0';
    int ln = n - 1;
    for (i = 0; i <= ln; i++)
    {
        if (s[i] == 'V')
            p += 5;
        else if (s[i] == 'W')
            p += 2;
        else if (s[i] == 'X' && i != ln)
        {
            i++;
        }
        else if (s[i] == 'Y' && i != ln)
        {
            t = s[i + 1];
            s[ln + 1] = t;
            s[ln + 2] = '\0';
            ln++;
            i++;
        }
        else if (s[i] == 'Z' && i != ln)
        {
            if (s[i + 1] == 'W')
            {
                p = p / 2;
                i++;
            }
            else if (s[i + 1] == 'V')
            {
                p = p / 5;
                i++;
            }
        }
    }
    printf("%d", p);
    return 0;
}