#include <stdio.h>
int main()
{
    int a, b, i, x, sum = 0;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        x = a;
        a = b;
        b = x;
    }
    i = a + 1;

    while (i < b)

    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
