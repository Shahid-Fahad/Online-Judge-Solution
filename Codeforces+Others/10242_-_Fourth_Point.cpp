#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, a, b, c, d, i, l=0;
    char ch;
    scanf("%d%c%d", &x, &ch, &y);
    if (x >= 1 && y >= 1 && x <= y)
    {
        while (x <= y)
        {
            c = x;
            while (c > 0)
            {
                d = 0;
                b = 0;
                a = c % 10;

                c /= 10;

                if (a != 4 && a != 7)
                {
                    d++;
                    break;
                }
                else
                {
                    b++;
                }
            }
            if (b > 0)
            {
                l++;
                printf("%d ", x);
            }
            x++;
        }
        if (l == 0)
        {
            printf("-1");
        }
    }

    printf("\n");
    return 0;
}