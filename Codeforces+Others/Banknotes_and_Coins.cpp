#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, a, b, c, i;
    scanf("%d%d", &x, &y);
    while (x <= y)
    {
        c = x;
        while (c > 0)
        {
            b = 0;
            a = c % 10;
            c /= 10;
            if (a == 4 || a == 7)
            {
                b++;
                printf("%d ", a);
            }
            x++;
        }
    }
    if (b == 0)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}