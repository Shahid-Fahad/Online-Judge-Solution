#include <stdio.h>
int main()
{
    int i = 1, t, a = 0, b = 0, n;

    scanf("%d", &t);
    while (i <= t)
    {
        i++;
        scanf("%d", &n);

        if (n >= 10 && n <= 20)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    printf("%d in\n",a );
    printf("%d out\n", b);

    return 0;
}