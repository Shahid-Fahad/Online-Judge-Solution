#include <stdio.h>
int main()
{
    int i, n, product;
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            product = (i * i);
            printf("%d\n", product);
        }
        i++;
    }
    return 0;
}