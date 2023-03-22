#include <stdio.h>
int main()
{
    int x, y;
    double ttl;
    scanf("%d%d", &x, &y);
    if (x == 1)
    {
        ttl = (double)(4.00 * y);
    }
    else if (x == 2)
    {
        ttl = (double)(4.50 * y);
    }
    else if (x == 3)
    {
        ttl = (double)(5.00 * y);
    }
    else if (x == 4)
    {
        ttl = (double)(2.00 * y);
    }
    else if (x == 5)
    {
        ttl = (double)(1.50 * y);
    }
    printf("Total: R$ %.2lf\n", ttl);
    return 0;
}