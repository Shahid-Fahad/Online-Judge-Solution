#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int freq[27] = {0};
    char ch;
    while (1)
    {
        ch = getchar();
        if(ch=='\n')
        break;
        int k = ch - 'a';
        freq[k]++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j <= freq[i]; j++)
        {
            char x = i + 'a';
            printf("%c", x);
        }
    }
}